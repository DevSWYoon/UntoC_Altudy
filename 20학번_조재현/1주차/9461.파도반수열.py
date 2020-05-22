#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-07
#-----------------------------------------------


def p(n):
    if n<=3:
        return 1
    if n==4 or n==5:
        return 2
    if n>=6:
        return p(n-1)+p(n-5)

trial = int(input())
num =[]
for i in range(trial):
    a = int(input())
    print(p(a))

