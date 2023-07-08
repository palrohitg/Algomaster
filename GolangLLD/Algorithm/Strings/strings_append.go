package main

import "fmt"

func main() {

	listOfStrings := []string{"vikas", "rohit", "pal"}
	listOfStrings = append(listOfStrings, "ram here") // append in the strings lists here
	fmt.Println(listOfStrings)

	for i := 0; i < len(listOfStrings); i++ {
		fmt.Println(listOfStrings[i])
	}

	// Iterate using the range function in go
	// Index , values of each elements that we have here
	for key, value := range listOfStrings {
		fmt.Println(key)
		fmt.Println("Find the values here")
		fmt.Println(value)
	}
	return
}
