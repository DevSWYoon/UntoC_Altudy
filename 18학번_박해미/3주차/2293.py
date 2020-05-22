# 201824484 Park Haemi
# BaekJoon 2293
# 29380kb 236ms

import sys
sys.setrecursionlimit(10000)

result = 0

## 기존에 사용하던 방식..
## 메모리와 시간 모두 너무 커짐.
def getAnswer(coins, index, value): 
    global result
          
    for i in range(index, 0, -1):
        if (index==0):
            return 0
        
        if (coins[i-1] == value):
            #print("end!!: %d - %d" % (value, coins[i-1]))
            result += 1
        elif (coins[i-1] > value):
            coins.pop()
        elif (coins[i-1] < value):
            #print("recursive!!:: %d - %d" % (value, coins[i-1]))        
            getAnswer(coins, i, value - coins[i-1])
    return 0



def main():
    global result
    s1, s2 = input().split()
    n = int(s1)
    k = int(s2)

    coins = [0 for i in range(n+1)]

    for i in range(1, n+1):
        coins[i] = int(input())
    
    coins.sort()

    # getAnswer(coins, n, k)

    ## 방법2 dynamic programming
    ## 원래는 n+1개의 row가 있었으나 메모리가 너무 커짐
    dp = [0 for col in range(k+1)]
    dp[0] = 1

    for i in range(1, n+1):
        for j in range(0, k+1):
            if (j >= coins[i]):
                dp[j] = dp[j] + dp[j - coins[i]]
            
    result = dp[k]
    print(result)


if (__name__ == '__main__'):
    main()
