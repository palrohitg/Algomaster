//Write a program that return the duplicate arrays

#include<iostream>
using namespace std;

// Return that cout occur same
void stringcheck(char*in) {
	int i,j;
	for (i = 0; in[i] != '\0'; i++) {
		int s = 0, e = 0;
		for (j = i + 1; in[j] != '\0'; j++) {
			// if (in[i] != in[j]) {
			// 	break;
			// }
			if (in[i] == in[j]) {
				s = i;
				e = j; //set the start and the endpoistion
			}
	
		}
		for (int k = s; k <= e; ++i)
			{
				cout << in[k];
			}

	}
}

int main() {
	char in[] = "hello";
	//int size = sizeof(in)/sizeof(char);
	//cout << size;
	stringcheck(in);

	return 0;
}