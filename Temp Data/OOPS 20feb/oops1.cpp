// class and object 
/*
	1. Getter and Setter
	2. Constructor and deep, shallow copy 
	3. Webinar of Operator overloading


*/
#include <iostream>
#include <cstring>
using namespace std;

class Car
{
	int price; // private members can accessed within the classes
	char *name;
	public :    
		
		Car() {
			cout << "I am Default Constructor" << endl;
		}

		// Parameterized Constructor
		Car(int price, char* n) {
			price = price;
			strcpy(name,n);
		}

		void setPrice(int p) {
			price = p;
		}	
		
		void getPrice() {
			cout << price << endl;
		}
		void getName() {
			cout << name << endl;
		}
		void print() {
			cout << price << endl;
			cout << name << endl;
		}
};

int main() {
	// create the object 
	Car b(1000,"Audi");
	// b.setPrice();
	// b.getPrice();
	// b.getName();
	b.print();
	// cout << b.name << endl;
	// cout << b.price << endl;
	return 0;
}