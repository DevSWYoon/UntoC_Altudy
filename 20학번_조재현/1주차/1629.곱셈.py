#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-07
#-----------------------------------------------

A, B, C = input().split()
#A, B,C = 10,11,12
A, B, C = int(A), int(B), int(C)

k = False
a = 0
li = [""]

while True:
    a += 1
    if (((A%C)**a)%C) not in li:
        li.append(((A%C)**a)%C)
    else:
        break

print(li[B%(len(li))])