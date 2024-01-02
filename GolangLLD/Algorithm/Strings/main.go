package main

import "container/list"

type KV struct {
	k int
	v int
}

type LRUCache struct {
	capacity int
	hm       map[int]*list.Element
	dll      *list.List
}

func Constructor(capacity int) LRUCache {
	return LRUCache{
		capacity: capacity,
		hm:       make(map[int]*list.Element),
		dll:      list.New(),
	}
}

// Simple Function to get the elements In the List we have
func (c *LRUCache) Get(key int) int {
	if el, ok := c.hm[key]; ok {
		c.dll.MoveToFront(el) // if elements is found then move to the front from the dll
		return el.Value.(KV).v
	}
	return -1 // elements is not present in the arrays
}

func (c *LRUCache) Put(key int, value int) {
	if el, ok := c.hm[key]; ok {
		el.Value = KV{k: key, v: value}
		c.dll.MoveToFront(el) // again moving the dll elements into the fron the linked list
		return
	}
	if c.dll.Len() == c.capacity {
		last := c.dll.Back()
		delete(c.hm, last.Value.(KV).k) // delete the key from the hashmap which values.
		c.dll.Remove(last)
	}
	c.hm[key] = c.dll.PushFront(KV{k: key, v: value})
}
