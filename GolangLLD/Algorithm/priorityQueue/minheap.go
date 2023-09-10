//package main
//
//import (
//	"container/heap"
//	"fmt"
//)
//
//type MinHeap []int
//
//func (h MinHeap) Len() int {
//	return len(h)
//}
//
//func (h MinHeap) Less(i, j int) bool {
//	return h[i] < h[j]
//}
//
//func (h MinHeap) Swap(i, j int) {
//	h[i], h[j] = h[j], h[i]
//}
//
//func (h *MinHeap) Push(x interface{}) {
//	*h = append(*h, x.(int))
//}
//
//func (h *MinHeap) Pop() interface{} {
//	old := *h
//	n := len(old)
//	x := old[n-1]
//	*h = old[0 : n-1]
//	return x
//}
//
//func (h *MaxHeap) Pop() interface{} {
//	old := *h
//	n := len(old)
//	x := old[n-1]
//	*h = old[0 : n-1]
//	return x
//}
//
//func main() {
//	minh := &MinHeap{12, 1, 11, 2412, 1231}
//	heap.Init(minh)
//
//	top := heap.Pop(minh)
//	fmt.Println(top)
//
//	// Push elements
//	//heap.Push(minh, 0)
//	//heap.Push(minh, 7)
//
//	// Pop and print elements in ascending order
//	//for minh.Len() > 0 {
//	//	fmt.Printf("%d ", heap.Pop(minh))
//	//}
//}
