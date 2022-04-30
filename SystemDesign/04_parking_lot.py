"""
- Different class: 
a. Vehicle : 
    license_no:
    color 
    type 
b. ParkingLot:
    function:
        - entry --> return ticket, input: vehicle_id / license
        - exists --> return price, input : vehicle_id / license 
c. Ticket: 
    ticket_id
    parking_spot_id
    license_number
    entry_time : 
    exits_time : 
d. ParkingSpot: 
    parkingspotId
    size
    state : free / occupied 

function: 
1. first the large vehicle comes we are going to try to allocated the large / space or this size 
if there is an space which is left then allocated the extra space of the users : 
    - always try to assign the large space. 
"""