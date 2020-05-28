#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     26-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#-------------------------------------------------------------------------------
#202055568 유지호
#Memory:200380KB Time required:60ms May 26
T=int(input())
n=[]
for i in range(T):
    a=int(input())
    n.append(a)
for i in range(len(n)):
    N=[0 for k in range(0,n[i]+1)]
    N[0]=1
    for j in range(n[i]+1):
        if j-1>=0:
            N[j]+=N[j-1]
            if j-2>=0:
                N[j]+=N[j-2]
                if j-3>=0:
                    N[j]+=N[j-3]
    print(N[-1])










