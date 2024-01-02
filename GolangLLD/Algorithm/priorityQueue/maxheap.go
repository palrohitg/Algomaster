package main

import (
	"container/heap"
	"fmt"
)

type MaxHeap []int

func (h MaxHeap) Len() int           { return len(h) }
func (h MaxHeap) Less(i, j int) bool { return h[i] > h[j] } // Note the ">" for max heap
func (h MaxHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }

func (h *MaxHeap) Push(x interface{}) {
	*h = append(*h, x.(int))
}

func (h *MaxHeap) Pop() interface{} {
	old := *h         // Pointer defereence
	n := len(old)     // Len
	x := old[n-1]     // last element
	*h = old[0 : n-1] // again save the elements
	return x
}

func main() {
	// Initialize an empty max-heap
	/*
			1. Steps One should be initialzied the heaps
		 		maxH := &MaxHeap{}
				heap.Init(maxh)

				heap.Push(maxH, e) // receiver args
				heap.Pop(maxH) // second the other agruments
	*/
	maxh := &MaxHeap{}
	heap.Init(maxh)

	// Push elements into the max-heap
	elements := []int{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}
	for _, e := range elements {
		heap.Push(maxh, e)
	}

	elementsMatrix := [2][2]int{}

	for i := 0; i < 2; i++ {
		for j := 0; j < 2; j++ {
			elementsMatrix[i][j] = 10
		}
	}

	fmt.Println(heap.Pop(maxh))

	// Pop and print elements in descending order (max-heap order)
	//for maxh.Len() > 0 {
	//	fmt.Printf("%d ", heap.Pop(maxh))
	//}
}
