package main

/*
 - Important Points:

 a. Singleton object can have only one instance and that instances should be globally accessible

 UseCase:
 - 1. DB Instance : we only want to create only one instance of DB object and that instance will be used
	throughout the application.
 - 2. Logger instance
 - 3. Cache instance
 - 4. Configuration files

*/

import "fmt"

func main() {
	fmt.Println("testing")
	return
}
