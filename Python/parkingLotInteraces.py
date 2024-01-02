from datetime import datetime, timedelta

class Vehicle:
    def __init__(self, vehicle_type):
        self.vehicle_type = vehicle_type
        self.parked_time = None

    # set the parked time we have 
    def set_parked_time(self):
        self.parked_time = datetime.now()

    # Get the parked time we are going to few's find the changes 
    # find the changes 
    def get_parked_time(self):
        return self.parked_time


"""
    - Correct with the connections with the positive attitude we are again in the logic for the events.
    - Ride Sharing Application for the objects we are going to find the logics. 
""" 
class ParkingLot:
    def __init__(self, floors, rows, spots_per_row):
        self.spots = [[[None for _ in range(spots_per_row)] for _ in range(rows)] for _ in range(floors)]
        self.floors = floors
        self.rows = rows
        self.spots_per_row = spots_per_row

    def park(self, vehicle, floor, row, spot): 
        # check if the elements is present or not 
        # check if any elements find the columns find the park+ 
        # check if any elements or seems 
        if self.spots[floor][row][spot] is None:
            self.spots[floor][row][spot] = vehicle
            print(f"{vehicle.vehicle_type} parked successfully at floor {floor}, row {row}, spot {spot}.")
            return True
        else:
            print("Spot already occupied.")
            return False

    def leave(self, vehicle):
        for i in range(self.floors):
            for j in range(self.rows):
                for k in range(self.spots_per_row):
                    # todo: Find the current live and past experience as well
                    if self.spots[i][j][k] == vehicle:
                        parked_time = vehicle.get_parked_time()
                        current_time = datetime.now()
                        hours = (current_time - parked_time).total_seconds() / 3600
                        cost = vehicle.calculate_cost(hours)
                        self.spots[i][j][k] = None
                        print(f"{vehicle.vehicle_type} left successfully. Total cost: {cost}")
                        return True
        print(f"{vehicle.vehicle_type} not found.")
        return False

    def available_spots(self, floor):
        count = sum(1 for i in range(self.rows) for j in range(self.spots_per_row) if self.spots[floor][i][j] is None)
        return count


class Car(Vehicle):
    def calculate_cost(self, hours):
        return hours * 2


class Bike(Vehicle):
    def calculate_cost(self, hours):
        return hours * 1


class HandicappedVehicle(Vehicle):
    def calculate_cost(self, hours):
        return 0

if __name__ == "__main__":
    lot = ParkingLot(3, 10, 20) 
    car1, car2 = Car("Car"), Car("Car")
    bike1, bike2 = Bike("Bike"), Bike("Bike")
    hv1 = HandicappedVehicle("Handicapped")

    
    """
        todo:
            1. Find the currently
    """
    
    
    car1.set_parked_time() 
    lot.park(car1, 0, 0, 0)
    car2.set_parked_time()
    lot.park(car2, 0, 0, 1)
    bike1.set_parked_time()
    lot.park(bike1, 0, 0, 2)
    hv1.set_parked_time()
    lot.park(hv1, 2, 9, 19)

    print("Available spots on floor 0:", lot.available_spots(0)) # todo: find the correctly find parking and iswell. Mayb
    lot.leave(car1)
    lot.leave(bike2)

    print("Available spots on floor 0:", lot.available_spots(0))
