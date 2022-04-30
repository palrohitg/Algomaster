import time


def minStepsToOneDP(n, dp):
    if (n == 1) : return 0

    if (dp[n] is not None):
        return dp[n]

    op1 = minStepsToOneDP(n - 1, dp)
    ans = op1 

    if (n % 2 == 0):
        op2 = minStepsToOneDP(n // 2, dp)
        if (op2 < ans):
            ans = op2

    if (n % 3 == 0):
        op3 = minStepsToOneDP(n // 3, dp)
        if (op3 < ans):
            ans = op3
    dp[n] = 1 + ans
    return  dp[n]


def minStepsToOne(n):
    
    if (n == 1) : return 0

    op1 = minStepsToOne(n - 1)
    ans = op1 

    if (n % 2 == 0):
        op2 = minStepsToOne(n // 2)
        if (op2 < ans):
            ans = op2

    if (n % 3 == 0):
        op3 = minStepsToOne(n // 3)
        if (op3 < ans):
            ans = op3
w
    return 1 + ans 


dp = [None] * 301
start_time = time.time()  
print(minStepsToOneDP(300, dp))
end_time = time.time()
print(end_time - start_time)
    