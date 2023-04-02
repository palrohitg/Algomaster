class Solution:
    def lcs(self, i, j, text1, text2, memo):
        if (i == len(text1)): return 0 
        if (j == len(text2)): return 0 
        
        if memo[i][j] != 0: return memo[i][j]
        ans = 0 
        if (text1[i] == text2[j]): 
            ans =  1 + self.lcs(i+1, j+1, text1, text2, memo) 
        else:
            ans = max(self.lcs(i+1, j, text1, text2, memo), self.lcs(i, j+1, text1, text2, memo))
        memo[i][j] = ans
        return memo[i][j]
    
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        memo = [[0 for _ in range(len(text2) + 1)] for _ in range(len(text1) + 1) ]
        return self.lcs(0, 0,text1, text2, memo)
    

"""
TC: O(MN)
SC : O(MN)
"""
