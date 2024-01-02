package main

func main() {
	q := priorityqueue.New[int](comparator.Reverse(comparator.IntComparator),
		priorityqueue.WithGoroutineSafe())
	return
}
