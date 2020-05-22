#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-17
#-----------------------------------------------
N = int(input())
li = [int(input()) for num in range(N)]
maax = max(li)
pibo = [[1,0],[0,1],[1,1],[1,2],[2,3]]

while True:
    if len(pibo) >= maax+1:
        break
    else:
        pibo.append([0,0])
        pibo[-1][0] = pibo[-2][0] + pibo[-3][0]
        pibo[-1][1] = pibo[-2][1] + pibo[-3][1]

for out in range(N):
    print(pibo[li[out]][0],pibo[li[out]][1])
