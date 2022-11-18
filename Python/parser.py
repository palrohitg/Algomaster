import json 

json_object = '{ "name":"John", "age":30, "city":"New York"}'
print(type(json_object))
parse_object = json.loads(json_object) 
print(type(parse_object))
