package main

import (
	"fmt"
	"sort"
)

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
	// key := 11
	// fmt.Println(linearSearchAlgorithm(dataList, key))

	// Sorting of the slices
	sort.Ints(dataList)
	fmt.Println(dataList)
	return
}
