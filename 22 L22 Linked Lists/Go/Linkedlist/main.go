package main

import (
	"fmt"
	"math/rand"
)

type Node struct {
	data interface{}
	next *Node
}

type List struct {
	head *Node
}

// Insert elements into list on last appends
func (l1 *List) Insert(data interface{}) {
	// create a new node
	newNode := &Node{data: data, next: nil}
	if l1.head == nil {
		l1.head = newNode
	} else {
		temp := l1.head
		for temp.next != nil {
			temp = temp.next
		}
		temp.next = newNode
	}
}

func Show(l1 *List) {
	temp := l1.head
	for temp != nil {
		fmt.Printf("--> %v", temp.data)
		temp = temp.next
	}
}

func main() {

	l1 := List{}
	for i := 0; i < 5; i++ {
		l1.Insert(rand.Intn(100))
	}
	Show(&l1) // calling show function for printing linked list elements
	return
}
