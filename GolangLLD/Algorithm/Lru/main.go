package main

import (
	"container/list"
	"fmt"
)

type LRUCache struct {
	hm  map[int]*list.Element
	dll *list.List
	cap int
}

type pair struct {
	first  *list.Element
	second int
}

func Constructor(capacity int) LRUCache {
	return LRUCache{
		hm:  make(map[int]*list.Element),
		dll: list.New(),
		cap: capacity,
	}
}

func (this *LRUCache) moveToFirst(key int) {
	this.dll.MoveToFront(this.hm[key])
}

func (this *LRUCache) Get(key int) int {
	if ele, ok := this.hm[key]; ok {
		this.moveToFirst(key)
		return ele.Value.(*pair).second
	}
	return -1
}

func (this *LRUCache) Put(key int, value int) {
	if ele, ok := this.hm[key]; ok {
		ele.Value.(*pair).second = value
		this.moveToFirst(key)
	} else {
		if this.cap <= 0 {
			lastEle := this.dll.Back()
			delete(this.hm, lastEle.Value.(*pair).first.(*list.Element).Value.(*pair).first.(int))
			this.dll.Remove(lastEle)
		} else {
			this.cap--
		}
		ele := this.dll.PushFront(&pair{nil, value})
		this.hm[key] = ele
		ele.Value.(*pair).first = ele
	}
}

func main() {
	obj := Constructor(2)
	obj.Put(1, 1)
	obj.Put(2, 2)
	fmt.Println(obj.Get(1)) // Output: 1
	obj.Put(3, 3)
	fmt.Println(obj.Get(2)) // Output: -1
	obj.Put(4, 4)
	fmt.Println(obj.Get(1)) // Output: -1
	fmt.Println(obj.Get(3)) // Output: 3
	fmt.Println(obj.Get(4)) // Output: 4
}
