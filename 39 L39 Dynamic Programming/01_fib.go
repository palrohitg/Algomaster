package main

import "fmt"

func fib(n int) int {
	if (n == 0) || (n == 1) {
		return n
	}
	ans := fib(n-1) + fib(n-2)
	return ans
}

func main() {

	results := fib(10)
	fmt.Println(results)
	return
}
