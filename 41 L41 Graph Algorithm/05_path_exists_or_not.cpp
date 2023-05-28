#include<bits/stdc++.h>
using namespace std;

/*
    Approach: 
    1. Do the simple BFS Traversal. 
    2. If any point of time the currentNode == destinationNode return true 
    3. Else Do the traversal for all others nodes. 
    4. PhoneNumber Trie Questions
*/  

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        list<int> *adjacentList = new list<int>[n]; 
        for (auto edge : edges) {
            int x = edge[0];
            int y = edge[1]; 
            adjacentList[x].push_back(y);
            adjacentList[y].push_back(x);
        }
        map<int,bool> visited; 
        queue<int> q; 
        q.push(source); 
        visited[source] = true;

        while(!q.empty()) {
            int currentNode = q.front();
            if (currentNode == destination) return true; 
            q.pop(); 

            for(auto nbr : adjacentList[currentNode]) {
                if (!visited[nbr]) {
                    q.push(nbr);
                    visited[nbr]=true; 
                }
            }
        }
        return false; 
    }
};