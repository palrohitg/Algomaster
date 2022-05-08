#include<bits/stdc++.h>
using namespace std;


// static belongs to type not the instance so they get the memory onces
class Student {
    public: 
        int id;
        string name; 
        static float rateOfIntertest; 

    // Parameterized Constructors 
    Student() {
        cout << "Constructors Called" << endl; 
    }

    // This refer to current instance of objects 
    Student(int id, string name) {
        this->id = id;
        this->name = name; 
    }

    void display() {
        cout << id << name << endl; 
        cout << rateOfIntertest << endl; 
    }

    ~Student() {
        cout << "Destructor Call" << endl; 
    }
}; 

float Student::rateOfIntertest = 6.434;
// Construcutor is methods which invoked during the objects creations
// Default , Parameterized constructors



// structure vs Class

int main() {

    Student s1(10, "vikas");
    // s1.id = 10;
    // s1.name = "vikas";
    s1.display();
    cout << s1.id << endl; 

    return 0;
}

/** 
 Friend Functions :
 - If a function is defined as friends in any class then 
 - private and public members can be access it methods and variable 
 */