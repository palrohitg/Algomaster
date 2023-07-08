package main

import (
	"fmt"
	"strconv"
)

type Car struct {
	carRegistrationNumber string
	carColour             string
	carSlot               *int
}

func (c *Car) setSlot(slot int) {
	c.carSlot = &slot
}

func (c *Car) getSlot() *int {
	return c.carSlot
}

func (c *Car) getColour() string {
	return c.carColour
}

func (c *Car) getRegistrationNumber() string {
	return c.carRegistrationNumber
}

type ParkingLot struct {
	parkedCars int
	slots      map[int]*Car
}

func (p *ParkingLot) incrementParkedCars() {
	p.parkedCars++
}

func (p *ParkingLot) decrementParkedCars() {
	p.parkedCars--
}

func (p *ParkingLot) getParkedCars() int {
	return p.parkedCars
}

func (p *ParkingLot) getSlots() map[int]*Car {
	return p.slots
}

func (p *ParkingLot) setSlots(slot int, value *Car) {
	p.slots[slot] = value
}

func createParkingLot(size int) *ParkingLot {
	parkingLot := &ParkingLot{
		parkedCars: 0,
		slots:      make(map[int]*Car, size),
	}
	fmt.Println("Created a parking slot with", size, "slots")
	return parkingLot
}

func parkingLotIsFull(parkingLot *ParkingLot) bool {
	return len(parkingLot.getSlots()) <= parkingLot.getParkedCars()
}

func parkCar(parkingLot *ParkingLot, registrationNumber string, colour string) string {
	var returnString string
	if parkingLot != nil {
		if !parkingLotIsFull(parkingLot) {
			parkingSlot := parkingLot.getSlots()
			for slot := range parkingSlot {
				if parkingSlot[slot] == nil {
					car := &Car{
						carRegistrationNumber: registrationNumber,
						carColour:             colour,
					}
					parkingLot.setSlots(slot, car)
					car.setSlot(slot)
					parkingLot.incrementParkedCars()
					returnString = "Allocated slot number: " + strconv.Itoa(slot)
					break
				}
			}
		} else {
			returnString = "Sorry, parking lot is full"
		}
	} else {
		returnString = "Parking lot is not defined"
	}
	return returnString
}

func carDeparture(parkingLot *ParkingLot, inputSlot string) string {
	var returnString string
	if parkingLot != nil {
		if parkingLot.getParkedCars() == 0 {
			returnString = "Sorry, parking lot is empty"
		} else if slot, err := strconv.Atoi(inputSlot); err == nil && slot >= 1 && slot <= len(parkingLot.getSlots()) {
			parkingSlot := parkingLot.getSlots()
			value := parkingSlot[slot]
			if value != nil {
				parkingLot.setSlots(slot, nil)
				parkingLot.decrementParkedCars()
				returnString = "Slot number " + inputSlot + " is free"
			} else {
				returnString = "No car at Slot number " + inputSlot
			}
		} else {
			returnString = "Cannot exit slot: " + inputSlot + " as no such exist!"
		}
	} else {
		returnString = "Parking lot is not defined"
	}
	return returnString
}

func lotStatus(parkingLot *ParkingLot) string {
	var returnString string
	if parkingLot != nil {
		fmt.Println("Slot No.\tRegistration No\tColour")
		parkingSlot := parkingLot.getSlots()
		for _, parkedCar := range parkingSlot {
			if parkedCar != nil {
				returnString += strconv.Itoa(*parkedCar.getSlot()) + "\t" +
					parkedCar.getRegistrationNumber() + "\t" +
					parkedCar.getColour() + "\n"
			}
		}
	} else {
		returnString = "Parking lot is not defined"
	}
	return returnString
}

func carByColour(parkingLot *ParkingLot, inputColour string) string {
	var returnString string
	if parkingLot != nil {
		if parkingLot.getParkedCars() == 0 {
			returnString = "Sorry, parking lot is empty"
		} else {
			var flag bool
			parkingSlot := parkingLot.getSlots()
			for _, parkedCar := range parkingSlot {
				if parkedCar != nil && parkedCar.getColour() == inputColour {
					flag = true
					returnString += parkedCar.getRegistrationNumber() + ", "
				}
			}
			if !flag {
				returnString = "Not found"
			}
		}
	} else {
		returnString = "Parking lot is not defined"
	}
	return returnString
}

func slotByColour(parkingLot *ParkingLot, inputColour string) string {
	var returnString string
	if parkingLot != nil {
		if parkingLot.getParkedCars() == 0 {
			returnString = "Sorry, parking lot is empty"
		} else {
			var flag bool
			parkingSlot := parkingLot.getSlots()
			for _, parkedCar := range parkingSlot {
				if parkedCar != nil && parkedCar.getColour() == inputColour {
					flag = true
					returnString += strconv.Itoa(*parkedCar.getSlot()) + ", "
				}
			}
			if !flag {
				returnString = "Not found"
			}
		}
	} else {
		returnString = "Parking Lot is not defined"
	}
	return returnString
}

func slotByCarNumber(parkingLot *ParkingLot, number string) string {
	var returnString string
	if parkingLot != nil {
		if parkingLot.getParkedCars() == 0 {
			returnString = "Sorry, parking lot is empty"
		} else {
			var flag bool
			parkingSlot := parkingLot.getSlots()
			for _, parkedCar := range parkingSlot {
				if parkedCar != nil && parkedCar.getRegistrationNumber() == number {
					flag = true
					returnString += strconv.Itoa(*parkedCar.getSlot()) + ", "
					break
				}
			}
			if !flag {
				returnString = "Not found"
			}
		}
	} else {
		returnString = "Parking lot is not defined"
	}
	return returnString
}

func main() {
	parkingLot := createParkingLot(5)
	fmt.Println(parkCar(parkingLot, "KA-01-HH-1234", "White"))
	fmt.Println(parkCar(parkingLot, "KA-01-HH-9999", "White"))
	fmt.Println(parkCar(parkingLot, "KA-01-BB-0001", "Black"))
	fmt.Println(carDeparture(parkingLot, "2"))
	fmt.Println(parkCar(parkingLot, "KA-01-HH-7777", "Red"))
	fmt.Println(parkCar(parkingLot, "KA-01-HH-2701", "Blue"))
	fmt.Println(parkCar(parkingLot, "KA-01-HH-3141", "Black"))
	fmt.Println(lotStatus(parkingLot))
	fmt.Println(carByColour(parkingLot, "White"))
	fmt.Println(slotByColour(parkingLot, "Red"))
	fmt.Println(slotByCarNumber(parkingLot, "KA-01-HH-3141"))
}
