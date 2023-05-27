package main

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

func process(rawData *map[string]interface{}) {
	oldObject, ok := (*rawData)["vikas"]
	if ok {
		// delete((*rawData), "vikas")
		fmt.Println(oldObject)
	}
	fmt.Println((*rawData))
}

func main() {

	testMap := map[string]interface{}{
		"vikas": 12311,
		"names": "vikas",
	}

	// fmt.Println(testMap)
	// delete(testMap, "names")
	// fmt.Println(testMap)
	testMap["names"] = "testing"
	// fmt.Println(testMap)

	process(&testMap)
	// cur := new(ListNode)
	// cur.Val = 10
	// cur.Next = &ListNode{
	// 	Val:  29,
	// 	Next: nil,
	// }
	// fmt.Println(cur.Next.Val)
}
