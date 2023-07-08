package main

import (
	"fmt"
	"strconv"
)

type Car struct {
	registerNumber string
	color          string
	slot           int
}

func (c *Car) setSlot(slot int) {
	c.slot = slot
}

func (c *Car) getSlot() int {
	return c.slot
}

func (c *Car) getColor() string {
	return c.color
}

func (c *Car) getRegisterNumber() string {
	return c.registerNumber
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

func (p *ParkingLot) getSlot() map[int]*Car {
	return p.slots
}

// Directly Insert Into the Parking Objects Values
func (p *ParkingLot) setSlot(slot int, car *Car) {
	p.slots[slot] = car
}

func createParkingLot(size int) *ParkingLot {
	slots := make(map[int]*Car)
	for i := 0; i < size; i++ {
		slots[i] = nil
	}

	parkingLot := &ParkingLot{
		parkedCars: 0,
		slots:      slots,
	}
	return parkingLot
}

func parkingLotIsFull(parkingLot *ParkingLot) bool {
	return len(parkingLot.getSlot()) <= parkingLot.getParkedCars()
}

func parkCar(parkingLot *ParkingLot, registerNumber string, color string) string {
	var returnString string
	if parkingLot != nil {
		if !parkingLotIsFull(parkingLot) {
			parkingSlot := parkingLot.getSlot()
			for slot := range parkingSlot {
				if parkingSlot[slot] == nil {
					car := &Car{
						registerNumber: registerNumber,
						color:          color,
					}
					parkingLot.setSlot(slot, car) // Parking Slot
					car.setSlot(slot)             // Assigning the slot to car as wells.
					parkingLot.incrementParkedCars()
					returnString = "Parking lot is allocated"
					break
				}
			}
		} else {
			returnString = "Sorry, Parking lot is full"
		}
	} else {
		returnString = "Parking Slot is not defined yet"
	}
	return returnString
}

func carDeparture(parkingLot *ParkingLot, inputSlot string) string {
	var returnString string
	if parkingLot != nil {
		if parkingLot.getParkedCars() == 0 {
			returnString = "Sorry, Parking lot is empty"
		} else if slot, err := strconv.Atoi(inputSlot); err == nil && slot >= 1 && slot <= len(parkingLot.getSlot()) {
			parkingSlot := parkingLot.getSlot()
			value := parkingSlot[slot]
			if value != nil {
				parkingLot.setSlot(slot, nil)
				parkingLot.decrementParkedCars()
				returnString = "Slot number " + inputSlot + "is free"
			} else {
				returnString = "No Car at slot number " + inputSlot
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
		fmt.Println("Slot No. \tRegistration No.\tColour")
		parkingSlot := parkingLot.getSlot()
		for _, parkedCar := range parkingSlot {
			if parkedCar != nil {
				returnString += strconv.Itoa(parkedCar.getSlot()) + "\t" +
					parkedCar.getRegisterNumber() + "\t" + parkedCar.getColor() + "\n"
			}
		}
	} else {
		returnString = "Parking Lot is not defined"
	}
	return returnString
}

func carByColor() string {
	return ""
}

func slotByColor() string {
	return ""
}

func slotByCarNumber() string {
	return ""
}

func main() {

	parkingSlot := createParkingLot(6)
	fmt.Println(parkCar(parkingSlot, "3242242", "red"))
	fmt.Println(parkingSlot.getParkedCars())
	fmt.Println(lotStatus(parkingSlot))

	// car := &Car{
	// 	registerNumber: "hsfsdfs",
	// 	color:          "sdfsd",
	// 	slot:           1,
	// }

	// fmt.Println(car.getSlot())

	// m := make(map[int]*Car)

	// for i := 1; i <= 5; i++ {
	// 	m[i] = nil
	// }

	// parkingLot := &ParkingLot{
	// 	parkedCars: 0,
	// 	slots:      m,
	// }

	// // It doesn't maintain the order of the elements here
	// for slot := range parkingLot.slots {
	// 	fmt.Println(slot)
	// }
	return
}
