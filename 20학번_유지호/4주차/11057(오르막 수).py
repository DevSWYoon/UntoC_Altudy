#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     27-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#-------------------------------------------------------------------------------
#202055568 유지호
#Memory:29380KB Time required:72ms May 28
N=int(input())
c=[[0]*10 for i in range(N)]
s=0
T=False
for i in range(10):
    c[0][i]=1
for i in range(N-1):
    for j in range(1,10):
        for k in range(1,j+1):
            c[i+1][j]+=c[i][k]
for i in range(N):
    for j in range(1,10):
        s+=c[i][j]
print((s+1)%10007)












