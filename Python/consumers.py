from django.utils import timezone

from elasticsearch import Elasticsearch, helpers
from kafka_consumer import BaseConsumer
from django.conf import settings
from parkwheels import utils

from parkwheels.libs.es_utils.es_models import LoginLogsES
from parkwheels.app_logger import AppLogger
from parkwheels.users import models


logger = AppLogger(tag="SYNC_LOGIN_LOGS")

class Consumer(BaseConsumer):
    def consume_data(self, data):
        login_log = models.LoginLog.objects.create(**data)

        data['id'] = login_log.id
        data['created'] = timezone.localtime(login_log.created).strftime("%Y-%m-%d %I:%M:%S")
        data['updated'] = timezone.localtime(login_log.updated).strftime("%Y-%m-%d %I:%M:%S")
        login_logs_obj = LoginLogsES(
            response_status=data.get("response_status"),
            response_message=data.get("response_message"),
            user_id=data.get("user_id"),
            login_type=data.get("login_type"),
            login_method=data.get("login_method"),
            device_id=data.get("device_id"),
            device_brand=data.get("device_brand"),
            device_name=data.get("device_name"),
            device_model=data.get("device_model"),
            device_ram=data.get("device_ram"),s
            device_cpu=data.get("device_cpu"),
            ip=data.get("ip"),
            lat_long=data.get("lat_long"),
            platform=data.get("platform"),
            os_name=data.get("os_name"),
            os_version=data.get("os_version"),
            browser_name=data.get("browser_name"),
            browser_version=data.get("browser_version"),
            screen_height=data.get("screen_height"),
            screen_width=data.get("screen_width"),
            screen_resolution=data.get("screen_resolution"),
            app_name=data.get("app_name"),
            version_code=data.get("version_code"),
            version_name=data.get("version_name"),
            package_name=data.get("package_name"),
            referer=data.get("referer"),
            phone_number=data.get("phone_number"),
            created=data.get("created"),
            updated=data.get("updated"),
        ).to_dict()

        response = helpers.bulk(settings.ES_CONNECTION, [{
            '_op_type': 'create',
            '_id': data.get("id"),
            "_index": settings.ES_INDEXES['login_logs'],
            "_type": settings.ES_DOCS_TYPE['login_logs'],
            **login_logs_obj,
        }])

        try:
            logger.info("Calling insert mongodb logs for = {}".format(login_logs_obj))
            utils.mongodb_insert_doc("login_logs_collection", login_logs_obj)
        except Exception as e:
            logger.error("Error while calling insert mongodb log {}".format(e))
            
        return True


if __name__ == '__main__':
    Consumer(settings.KAFKA_TOPIC.LOGIN_LOG_SYNC, settings.KAFKA_GROUP.LOGIN_LOG_SYNC).listen()

# It will just provide the implementations details