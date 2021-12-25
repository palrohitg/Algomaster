#include<iostream>
#include<queue>
using namespace std;

/*
    Function in queues:
    1. 




*/




int main() {

    queue<int> q;

    for(int i=1; i<=5; i++) {
        q.push(i);
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;

}