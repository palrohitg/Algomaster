package main

import "fmt"

func linearSearchAlgorithm(data []int, key int) bool {
	for _, item := range data {
		if item == key {
			return true
		}
	}
	return false
}

func main() {
	dataList := []int{11, 22, 221}
	key := 11
	fmt.Println(linearSearchAlgorithm(dataList, key))
	return
}
