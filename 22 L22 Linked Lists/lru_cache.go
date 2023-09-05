import "container/list"

type kv struct {
	k int
	v int
}

type LRUCache struct {
	capacity int
	data     map[int]*list.Element
	hits     *list.List
}

func Constructor(capacity int) LRUCache {
	return LRUCache{
		capacity: capacity,
		data:     make(map[int]*list.Element),
		hits:     list.New(),
	}
}

func (this *LRUCache) Get(key int) int {
	if el, ok := this.data[key]; ok {
		this.hits.MoveToFront(el)
		return el.Value.(kv).v
	}
	return -1
}

func (this *LRUCache) Put(key int, value int) {
	// Just an update?
	if el, ok := this.data[key]; ok {
		el.Value = kv{k: key, v: value}
		this.hits.MoveToFront(el)
		return
	}

	// Check if the cache is full
	if this.hits.Len() == this.capacity {
		last := this.hits.Back()
		delete(this.data, last.Value.(kv).k)
		this.hits.Remove(last)
	}

	// Insert the new element
	this.data[key] = this.hits.PushFront(kv{k: key, v: value})
}
