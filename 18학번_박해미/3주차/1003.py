# 201824484 Park Haemi
# Baekjoon 1003
# 29380KB 68ms

# 0이 출력되는 횟수
# 1이 출력되는 횟수

dpTable=[[],[]]

def tableInitial(n):
    global dpTable
    dpTable = [0 for i in range(n)]
    dpTable[0] = 0
    dpTable[1] = 1

def getAnswer(n):
    global dpTable
    if (n==0):
        return dpTable[0]
    elif (n==1):
        return dpTable[1]
    else:
        if (dpTable[n]==0):
            dpTable[n] = getAnswer(n-1) + getAnswer(n-2)
            
        return dpTable[n]
      
        
case = int(input())

tableInitial(41)

for i in range(case):
    num = int(input());
    if (num==0):
        print("1 0")
    elif (num==1):
        print("0 1")
    else:
        getAnswer(num)
        fibonaci_0 = dpTable[num-1]
        fibonaci_1 = dpTable[num]
        print(str(fibonaci_0) + " " + str(fibonaci_1))



