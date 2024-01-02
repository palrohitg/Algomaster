from pydantic import BaseModel 


class User(BaseModel):
    id:int 
    username:str 
    email:str 
    


user_data = {
    "id" : 1,
    "user_name" : "vikas", 
    "email" : "vikas@gmail.com"
} 

try:
    user = User(**user_data) 
except Exception as e:
    print("error {}".format(e))
# print(user.email)