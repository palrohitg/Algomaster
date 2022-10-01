"""
General Tips: 
1. 

"""


"""
    - Follows Objects Oriented paradigms to solve any design problems
    - Flow Design Pattern. 
    - Flow Solid Principle 
    - Flow advanced concepts of OOPS programming
    - self, @static_method: if don't want to use self keywords in my function that use this keywords else use self keywords
    - @staticmethod: they can some functionality that is related to class by doesn't required at any instances.

    Access Modifier in Python: 
        1. Private
        2. Public
        3. Protected 

    Protected Data members: 
    - Abstract classes.
    - Singleton Simple Design Pattern

"""


class HomepageController():
    
    def __init__(self, request_data=None, user_details=None):
        self.request_data   = request_data
        self.latitude       = request_data.get("latitute")
        self.longtiute      = request_data.get("lonituted")
        
    def get_home_page_data(self):
        pass 

    def get_user_details(self):
        pass 

    def find_new_user(self):
        pass 