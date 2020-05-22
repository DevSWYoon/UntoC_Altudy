# 201824484 Park Haemi
# Baekjoon 1003
# 29380KB 68ms

# 0이 출력되는 횟수
# 1이 출력되는 횟수

dpTable=[]

# dp table initialize
def tableInitial(n):
    global dpTable
    dpTable = [0 for i in range(n)]
    dpTable[0] = 0
    dpTable[1] = 1

# fun: get answer
def getAnswer(n):
    global dpTable
    if (n==0):
        return dpTable[0]
    elif (n==1):
        return dpTable[1]
    else:
        # index가 0과 1이 아닐 때, table의 값이 0이 아니라면 이미 계산된 값. skip
        if (dpTable[n]==0):
            dpTable[n] = getAnswer(n-1) + getAnswer(n-2)
            
        return dpTable[n]

def main():
    case = int(input())

    # 0 <= n < 40
    tableInitial(41)

    # 0과 1은 초기화된 값.. 굳이 함수로 넘기지 않는다.
    for i in range(case):
        num = int(input());
        if (num==0):
            print("1 0")
        elif (num==1):
            print("0 1")
        else:
            # 일단 함수로 넘겨 n까지의 dp table을 계산.
            getAnswer(num)
            fibonaci_0 = dpTable[num-1]
            fibonaci_1 = dpTable[num]
            print(str(fibonaci_0) + " " + str(fibonaci_1))

if __name__ == "__main__":
    main()



