def fib(n, dp):
    if (n == 0) or (n == 1):
        return n
    
    if (dp[n] != None):
        return dp[n]
    
    ans = fib(n-1, dp) + fib(n-2, dp)
    dp[n] = ans
    return dp[n] 



n = 4
dp = [None]*(5+1) 
dp[0] = 0
dp[1] = 1

ans = fib(n, dp)
print(ans)

# O(N) + O(N) solutions hai
