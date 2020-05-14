#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      USER
#
# Created:     11-05-2020
# Copyright:   (c) USER 2020
# Licence:     <your licence>
#-------------------------------------------------------------------------------

N,M=map(int,input().split())
matrixA=[list(map(int,input().split())) for _ in range(N)]

M,K=map(int,input().split())
matrixB=[list(map(int,input().split())) for _ in range(M)]

matrixC = [[0 for col in range(K)] for row in range(N)]

for n in range(N):
    for k in range(K):
        for m in range(M):
            matrixC[n][k] += matrixA[n][m] * matrixB[m][k]


for i in matrixC:
    for j in i:
        print(j, end = ' ')
    print()

