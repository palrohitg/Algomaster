// prove of the a<b<c then there adjacent element is always going to smallers to need to traverse the adjacent element only
// sort the arrays and do the linear searchs 

int Solution::findMinXor(vector<int> &A) {

    sort(A.begin(), A.end()); 
    int ans = INT_MAX; 
    int temp; 
    for(int i = 0; i < A.size() - 1; i++) {
        int temp = A[i] ^ A[i+1];
        ans = min(temp, ans);
    }
   return ans;
}


// new problems