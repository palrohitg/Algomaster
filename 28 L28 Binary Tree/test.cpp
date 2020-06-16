#include<iostream>
using namespace std;
class node{

 public :
	int data;
	node *left;
	node *right;
	
	node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

int main(){

   node *root = new node(10);
   cout << root << endl;
   return 0;

}
