// compute the x,y corridnate from each tower and sort the value and find grid that is undefened 
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main() {

    int t; cin >> t; 
    int w,h,n;
    vector<int> x; 
    vector<int> y; 

    while(t--) {
        cin >> w >> h >> n; 

        for(int i = 0; i < n; i++) {
            int xi,yi; cin >> xi >> yi; 
            x.push_back(xi);
            y.push_back(yi);
        }

        // Sort both the arrays 
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        // Compute the maximum values of delta x and delta y to see the maximum results 
        int dx = x[0] - 1;
        int dy = y[0] - 1;

        for (int i = 1; i < n; i++) {
            dx = max(dx, x[i] - x[i - 1] - 1);
            dy = max(dy, y[i] - y[i - 1] - 1);
        }

        // Corner Case for the last tower 
        dx = max(dx, w - x[n - 1]);
        dy = max(dy, h - y[n - 1]);

        cout << dx * dy;
        cout << endl;
    
        x.clear();
        y.clear();

    }
    

    return 0;
}