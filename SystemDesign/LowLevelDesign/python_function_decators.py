# Decators allows the developers extends the behaviours of the functions. 

""" 
Using the functions are the arguments in the details
"""

# function as an objects here 
# def shout(text):
#     return text.upper() 

# print(shout("hellow"))

# vikas = shout 

# print(vikas("Vikas"))


# Passing funtions as argurments 


# def shout(text):
#     return text.upper()

# def greet(func):
#     gretting = func("Vikas gretting here") 
#     print(gretting)
    
# greet(shout) 


def hello_decorators(func):
    
    def inner():
        print("this is inside the functions called")
        func()
        print("this is the outside the functions calls")
    
    return inner 
        

def func_to_be_used():
    print("Inside the functions calls") 
    
    
function_to_used_called = hello_decorators(func_to_be_used)

function_to_used_called()




def hello_decorator(func):
	def inner1(*args, **kwargs):
		
		print("before Execution")
		
		# getting the returned value
		returned_value = func(*args, **kwargs)
		print("after Execution")
		
		# returning the value to the original frame
		return returned_value
		
	return inner1


# adding decorator to the function
@hello_decorator
def sum_two_numbers(a, b):
	print("Inside the function")
	return a + b

a, b = 1, 2

# getting the value through return of the function
print("Sum =", sum_two_numbers(a, b))
