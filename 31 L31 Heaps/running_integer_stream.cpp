/*
1. N^2logN bruteforce approches using sorting 
2. NlogN sorted insert in the running streams 
3. Optimized version of median

PseudoCode : 
1. Maintain two heaps maxheap and minheaps 
2. no <= median shift element from the maxheap to minheaps 
3. if max_heaps and nin_heaps tho average print as medians  
4. if right is greater/ minheaps then shift from minheaps to maxheaps 


*/



#include<iostream>
#include<queue>
#include<vector>
using namespace std; 




int main() {

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int t; cin >> t;
    while(t--) {
        
        int n; cin >> n;
        int d; cin >> d; 
        maxHeap.push(d);
        
        int median = d; 
        cout << d << " ";
        
        int count = 1;

        while(count < n) {
           
            int d; cin >> d; 
           
            if(maxHeap.size() > minHeap.size())  {
            // left heap or right heap 
                if(d < median) {
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                    maxHeap.push(d);
                }
                else {
                    minHeap.push(d);
                }
                
                median = (maxHeap.top() + minHeap.top())/2.0; 
            }
            else if(maxHeap.size() ==  minHeap.size()) {
                // size of both the heap is equals
                if(d < median) {
                    maxHeap.push(d);
                    median = maxHeap.top();
                }
                else {
                    minHeap.push(d);
                    median = minHeap.top();
                }
            
            }
            else {
                if(d > median) {
                    maxHeap.push(minHeap.top());
                    minHeap.pop();
                    minHeap.push(d);
                }
                else {
                    maxHeap.push(d);
                }
                median = (maxHeap.top() + minHeap.top())/2.0; 
            }

            cout << median << " ";
            count++;
        }  

    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//     int d; cin >> d;
//     maxHeap.push(d);
//     int  median = d; 

//     cout << "Median : " << median << endl; 

//     cin >> d; 

//     while(d != -1) {

//         if(maxHeap.size() > minHeap.size())  {
//             // left heap or right heap 
//             if(d < median) {
//                 minHeap.push(maxHeap.top());
//                 maxHeap.pop();
//                 maxHeap.push(d);
//             }
//             else {
//                 minHeap.push(d);
//             }
            
//             median = (maxHeap.top() + minHeap.top())/2.0; 
//         }
//         else if(maxHeap.size() ==  minHeap.size()) {
//             // size of both the heap is equals
//             if(d < median) {
//                 maxHeap.push(d);
//                 median = maxHeap.top();
//             }
//             else {
//                 minHeap.push(d);
//                 median = minHeap.top();
//             }
           
//         }
//         else {
//             if(d > median) {
//                 maxHeap.push(minHeap.top());
//                 minHeap.pop();
//                 minHeap.push(d);
//             }
//             else {
//                 maxHeap.push(d);
//             }
//           median = (maxHeap.top() + minHeap.top())/2.0; 
//         }

//         cout << "Median " << median << endl;
//         cin >> d;
//     }

//     return 0;
// }