
// Given a string "abc" find all the permuation of the given string 



#include<iostream>
using namespace std;


void permute(char*in , int i) {
	//Base case 
	
	if(in[i] == '\0') {
		cout << in << ',';
		return;
	}

	//Recursive case
	for (int j = i; in[j] !='\0' ; j++)
	{
		swap(in[i],in[j]);
		permute(in,i+1);
		//backtracking to restore the shape
		swap(in[i],in[j]);
	}
}
int main() {
	char in[] = "aabc"; // starting index which is zero
	permute(in,0);
	return 0;
}