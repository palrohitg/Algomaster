// Bucket Sort with Ranking Student example

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Student{
	public :
	int marks;
	string name;
};

void bucket_sort(Student s[], int n) {

	vector<Student> v1[101];
	for (int i = 0; i < n ; ++i)
	{
		// take the marks and assign the vector
		int m = s[i].marks;
		v[m].push_back(s[i]); // push both the name and the marks 
	}

	
}


int main(int argc, char const *argv[])
{
	Student s[10];
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> s[i].marks >> s[i].name;
	}
	bucket_sort(s,n);
    for(int i=0; i<n; i++) {
		cout <<  s[i].marks << s[i].name;
	}	
	return 0;
}