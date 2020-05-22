#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     20-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#----------------------------------------------------------------------------

N, K=map(int, input().split())
C=[]
for i in range(0,N):
    C.append(int(input()))
C.sort()

Coin=[0 for i in range(0,K+1)]
Coin[0]=1
for i in C:
    for j in range(1,K+1):
        if j-i>=0:
            Coin[j]+=Coin[j-i]
print(Coin[K])


