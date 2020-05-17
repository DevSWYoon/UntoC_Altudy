#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-07
#-----------------------------------------------
firstnum = int(input())
count = 0

##def checkcycle(num):
##    if num<10: tempnum = num*10
##    else: tempnum = num
##    return tempnum

def dismantle(num):
    num10 = num//10 #10자리
    num1 = num%10 #1자리
    nextnum = (num10 + num1)%10
    return (10*num1+nextnum)

noob = False
temp = firstnum
while noob==False:
    count += 1
    if dismantle(temp) == firstnum:
        noob=True
    else:
        temp = dismantle(temp)

print(count)

