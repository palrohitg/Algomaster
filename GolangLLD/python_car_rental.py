from enum import Enum 

class VehicleRentalApplication:
    class VehicleType(Enum):
        CAR = 1 
        TRUCK = 2 
    
    class Reservation:
        pass 
    
    class VechileCondtion:
        pass 
    
    class PaymentStatus:
        pass 
    
    class AccountStatus:
        pass 
    
    
    
    ## All the Details of the Person 
    
    class Person:
        pass 
    
    
    class Address:
        pass 
    
    
    class Account:
        
        def __init__(self, id, user_name, account_status, person):
            self.id = id 
            self.user_name = user_name 
            self.account_status = account_status 
            self.person = person 
        
        
        def reset_password(self):
            ## Password reset data function call here 
            pass  
        
        
        
    class AdditionalDriver(Person):
        def __init__(self, license_number, driver_id, first_name, last_name, phone_number, email):
            super().__init__(first_name, last_name, email, phone_number)
            self.license_number = license_number 
            
    
    
    class Member(Account):
        
        def reset_password(self):
            pass 
        
        def get_all_booking(self):
            pass 
        
        
    class VehicleReservationSystem: 
        
        def __init__(self):
            self.reservation_id = 11 
            self.booked_by = 121 
            self.reservation_status = True 
        
        def get_resservation_details(self, reservation_id):
            pass 
        
        def cancel_reservation(self, reservation_id):
            pass 
        
        
        