#include<iostream>
using namespace std;


vector<int> killProcess(vector<int> &pid, vector<int> &ppid, int kill) {
    vector<int> results; 
    unordered_map<int, vector<int>> m; 
    for (int i = 0; i < pid.size(); i++) {
        m[ppid[i].push_back(pid[i]); 
    }
    helper(kill, m, res); 
    return res; 
}

// DFS reversive dfs call here 
void helper(int kill, unordered_map<int, vector<int> &m, vector<int> &res) {
    res.push_back(kill);
    for (int p : m[kill]){
        helper(p, m, res); //
    } 
}
int main() {
    // kill process then you also need to kill other process as well here 
    
    return 0; 
}