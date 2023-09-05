package main

import "fmt"

type TreeNode struct {
	val   int
	left  *TreeNode
	right *TreeNode
}

type queue struct {
	items []*TreeNode
}

func (q *queue) push(item *TreeNode) {
	q.items = append(q.items, item)
}

func (q *queue) pop() *TreeNode {
	popItem := q.items[0]
	q.items = q.items[1:]
	return popItem
}

func (q *queue) isEmpty() bool {
	return len(q.items) == 0
}

func (q *queue) size() int {
	return len(q.items)
}

func levelOrder(root *TreeNode) [][]int {
	if root == nil {
		return nil
	}
	queue := &queue{}
	queue.push(root)
	queue.push(nil)
	results := [][]int{}
	arr := make([]int, 0)

	for !queue.isEmpty() {
		temp := queue.pop()
		if temp == nil {
			results = append(results, arr)
			if queue.size() == 0 {
				return results
			}
			queue.push(nil)
			arr = []int{} // reinitialized with the nil maps arrays
		} else {
			arr = append(arr, temp.val)
			if temp.left != nil {
				queue.push(temp.left)
			}
			if temp.right != nil {
				queue.push(temp.right)
			}
		}
	}
	return results
}

func main() {
	root := &TreeNode{
		val:   1,
		left:  nil,
		right: nil,
	}
	n1 := &TreeNode{
		val:   11,
		left:  nil,
		right: nil,
	}
	n2 := &TreeNode{
		val:   12,
		left:  nil,
		right: nil,
	}
	n3 := &TreeNode{
		val:   23,
		left:  nil,
		right: nil,
	}
	n4 := &TreeNode{
		val:   33,
		left:  nil,
		right: nil,
	}

	root.left = n1
	root.right = n2
	root.left.left = n3
	root.left.right = n4

	results := levelOrder(root)
	fmt.Println(results)
	// fmt.Println(root.left.right.val)
	return
}
