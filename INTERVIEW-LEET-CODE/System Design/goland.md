```go
// Arrays vs Slices in Go: 

// Size of the arrays need to be declared at the runtimes.
var arr [5]int // Declare an integer array with a fixed size of 5
arr[0] = 1
arr[1] = 2



// No need to defined the size of the slices 
slice := []int{1, 2, 3, 4, 5} // Declare a slice of integers
slice = append(slice, 6)      // Append an element to the slice
newSlice := slice[1:4]       // Create a new slice by slicing the original one




// Methods vs functions: 

// Methods contains the reciever elements while the others data functions doesn't contains the recieving args

```


```go
// Structures is a User Defined Identify 
// You need to re defined by your owns. 
/*
- How to check the types of variable at runTime in golang.
- Buffered an UnBuffered channel in golangs. 
- Function Closures : Anonymous functions are known as functions closures. 
- Which is safer for concurrent data access? Channels or Maps?
- What do you understand by Shadowing in Go?
29. What do you understand by variadic functions in Go?
- variadic functions in Go? : Optional Number of arguments 
*/

```