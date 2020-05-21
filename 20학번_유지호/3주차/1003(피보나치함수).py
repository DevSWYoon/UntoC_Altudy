#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     20-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#-------------------------------------------------------------------------------
#202055568 유지호
#Memory: 29380KB Time required: 60ms, May 19
def fibocount0(n):
    fibonacci0=[1,0]
    if n==0:
        return 1
    elif n==1:
        return 0
    else:
        for i in range(1,n):
            F0=fibonacci0[i-1]+fibonacci0[i]
            fibonacci0.append(F0)
        return fibonacci0[-1]


def fibocount1(n):
    fibonacci1=[0,1]
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        for j in range(1,n):
            F1=fibonacci1[j-1]+fibonacci1[j]
            fibonacci1.append(F1)
        return fibonacci1[-1]


N=int(input())
num=0
lis0=[]
lis1=[]
while num<N:
    Test_case=int(input())
    lis0.append(fibocount0(Test_case))
    lis1.append(fibocount1(Test_case))
    num+=1
for k in range(0,N):
    print(lis0[k],lis1[k])