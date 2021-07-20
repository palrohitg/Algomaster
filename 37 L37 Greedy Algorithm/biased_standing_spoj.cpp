/*

// minimum badness of the ranklist
Sorting problems : Counting Sort 

2

7
noobz 1
llamas 2
Winn3rz 2
5thwheel 1
NotoricCoders 5
StrangeCase 7
WhoKnows 7

3
ThreeHeadedMonkey 1
MoscowSUx13 1
NeedForSuccess 1

Output:
5
3

*/


#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std; 


// sum of all the badness in the ranklist 
int minBadness(vector<pair<string, int>> v, int n) {

    // frequency vector counting sort 
    vector<int> output{0}; 
    for(int i=0; i<n; i++) {
        int index = v[i].second; // prefered ranks 
        output[index]++;
    }


    int rank = 1;
    int total_badness = 0;

    //Iterate over the ouput vectors and decrease the count by 1 in each steps 
    for(int i=1; i<=n; i++) {

        while(output[i] >= 1) {
            int current_distance = abs(i - rank);
            rank++;
            output[i]--;
            total_badness += current_distance; 
        }
    }

    return total_badness;
}

int main() {

    int t; cin >> t; 
    vector<pair<string, int>> v; 

    while(t--) {
        int n; cin >> n; 
        
        for(int i=0; i<n; i++) {
            string team; cin >> team; 
            int preferred_rank; cin >> preferred_rank;
            v.push_back(make_pair(team,preferred_rank));
        }

        // cout << v[1].first << v[2].second;

        cout << minBadness(v, n); 
        cout << endl;
        v.clear();
    } 

    return 0;
}
