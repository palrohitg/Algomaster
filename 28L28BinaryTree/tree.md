## Jio Cinema Web Series is based : Coders who developed the startup Idea and learn the coding fort
## For building the application from the sctrached 

```go
package main

// TreeNode Structures for the users we have the nothing

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

type queue struct {
	items []*TreeNode
}

func (q *queue) push(item *TreeNode) {
	q.items = append(q.items, item) // listName and Final response
}

func (q *queue) isEmpty() bool {
	return len(q.items) == 0
}

func (q *queue) pop() *TreeNode {
	deleted := q.items[0]
	q.items = q.items[1:] // rest of the elements for the python as wells 
	return deleted
}

// First elements Need to be removed then
func (q *queue) peek() *TreeNode {
	if q.isEmpty() {
		return nil
	}
	return q.items[0]
}

func levelOrder(root *TreeNode) [][]int {
	if root == nil {
		return nil
	}

	queue := &queue{}
	queue.push(root)
	queue.push(nil)

	arr := make([]int, 0)
	results := [][]int{}

	for !queue.isEmpty() {
		temp := queue.pop()

		if temp == nil {
			results = append(results, arr)
			queue.push(nil)
			arr = []int{}

		} else {
			arr = append(arr, temp.Val)
			if temp.Left != nil {
				queue.push(temp.Left)
			}
			if temp.Right != nil {
				queue.push(temp.Right)
			}
		}
	}
	return results
}

func main() {

	return
}

```