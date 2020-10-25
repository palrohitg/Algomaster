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
