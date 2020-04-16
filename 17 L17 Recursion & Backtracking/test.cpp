#include<iostream>
using namespace std;


bool Tested(bool result) {
	for(int i=0; i<4; i++)  {
	if(result) {
		return true;
	}
	result = 0;
  }
 return false;
}
int main() {
	bool result = 0;
	cout << Tested(result);
	return 0;
}