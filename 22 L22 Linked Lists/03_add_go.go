package main

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

func main() {

	cur := new(ListNode)
	cur.Val = 10
	cur.Next = &ListNode{
		Val:  20,
		Next: nil,
	}
	fmt.Println(cur)
}
