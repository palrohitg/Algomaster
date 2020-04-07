/*
 Given an array then generate the all the subarray possible in that particular array.
 Another Question is calculate the sums of all the subarrays mention in particular array.
 
 Solution :
  * N^3 when we use the 3 loops , and if N=100 then worstcase = O(n^6) , 100^10^3 means mulitple, N=1000 then 10^9 leads to TLE.
  * Cumulative Sum arrays means out[0] = inp[0] then iterate over 1 to n-1 and change the value of out[]
*/

