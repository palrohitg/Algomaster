class Parent:
    
    def m1(self):
        print("I'm m1 functions") 
    

class Child(Parent):
    
    def __init__(self):
        print("Constructor of Child Class") 
    
    def m2(self):
        print("I'm m2 functions called")
    
    
obj = Child() 
obj.m1()
obj.m2()
        