package main

import (
	"fmt"
	"sort"
)

/*
Are the main data structures in the golangs
Arrays, channels, slices, maps, structures, sync data structures
*/
func linearSearchAlgorithm(data []int, key int) bool {
	for _, item := range data {
		if item == key {
			return true
		}
	}
	return false
}

// Find the Product subset whose subsums is less than a particular kth values

func ProductCountSubarrayCount() int {
	count := 0
	/*

		while(end < n) {
			p
			while ( start < end && k >= end) {
				// drive the start
				start++
			}

			if (p < k ) {
				// calculate the answers
			}
		}


	*/
	return count
}

func main() {
	dataList := []int{109, 11, 22, 221} // slice where we don't have any specific numbers currently

	// Particular sized arrays is
	dataListParticularSize := [10]int{}
	fmt.Println(dataListParticularSize)

	dataList2 := []int{}
	dataList2 = append(dataList2, 10)
	dataList2 = append(dataList2, 10)
	dataList2 = append(dataList2, 10)
	fmt.Println(dataList2)

	// Find the No of elements in the list
	start := 0
	end := len(dataList) - 1

	mid := start + (end-start)/2 // here the middle element would be one
	fmt.Println(mid)

	fmt.Println(len(dataList))
	// key := 11
	// fmt.Println(linearSearchAlgorithm(dataList, key))

	// Sorting of the slices
	sort.Ints(dataList)
	fmt.Println(dataList)
	return
}
