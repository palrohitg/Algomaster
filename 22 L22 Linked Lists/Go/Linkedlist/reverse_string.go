package main

import "fmt"

func main() {
	my_string := "Hello, World!"
	// other ways rounds here
	my_string_runes := []rune(my_string)
	fmt.Println(my_string_runes)
	length := len(my_string_runes)
	for i := 0; i < length/2; i++ {
		// just did a swapping for elements here
		temp := my_string_runes[i]
		my_string_runes[i] = my_string_runes[length-i-1]
		my_string_runes[length-i-1] = temp
	}
	reversed_string := string(my_string_runes)
	fmt.Println(reversed_string)
}
