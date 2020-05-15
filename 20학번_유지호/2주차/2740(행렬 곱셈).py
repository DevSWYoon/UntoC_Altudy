#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     15-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#-------------------------------------------------------------------------------
N, M=map(int, input().split())
A=[]
num=1
while num<=N:
    A.append(list(map(int, input().split())))
M, K=map(int, input().split())
B=[]
while num<=N:
    B.append(list(map(int, input().split())))

C=[]
D=[]
while num<=K:
    C.append(0)
while num<=N:
    D.append(C)

for n in range(0,N):
    for k in range(0,K):
        for m in range(M):
            D[n][k]+=A[n][m]*B[m][k]

for i in C:
    for j in i:
        print(j, end=" ")
    print()
