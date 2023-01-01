def minCoin(amount, t, coins, dp):  
    if (amount == 0): return 0 

    if (dp[amount]):
        return dp[amount] 
    
    ans = amount + 1 
    for coin in coins:
        if coin <= amount:
            subproblem = minCoin(amount-coin, t, coins, dp)
            ans = min(ans, subproblem+1)
    dp[amount] = ans 
    return dp[amount]

dp = [None]*4 
ans = minCoin(3, 3, [1, 7, 10], dp)
print(ans)