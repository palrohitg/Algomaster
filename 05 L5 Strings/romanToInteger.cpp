#include<bits/stdc++.h>
using namespace std;

int main() {

    string s = "vikas"; 

    cout << s.length() << endl;
    cout << s.back() << endl;       

    return 0;
}

["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]


int count=0,curr=0;
    string v[110];
    BrowserHistory(string homepage) {
        v[count]=homepage;
    }
    
    void visit(string url) {
        v[++count]=url;
        curr=count;
    }
    
    string back(int steps) {
        count = max(count-steps, 0);
        return v[count];
    }
    
    string forward(int steps) {
        count = min(curr, count+steps);
        return v[count];
    }