import sys

# input matrix A
N,M = map(int, sys.stdin.readline().split())

matrixA = [[0 for col in range(M)] for row in range(N)]

for n in range(N):
        matrixA[n] = list(map(int, sys.stdin.readline().split()))


# input matrix B
M,K = map(int, sys.stdin.readline().split())

matrixB = [[0 for col in range(K)] for row in range(M)]

for m in range(M):
        matrixB[m] = list(map(int, sys.stdin.readline().split()))
        

# calculate matrix AxB

matrixAB = [[0 for col in range(K)] for row in range(N)]

for n in range(N):
    for k in range(K):
        for m in range(M):
            matrixAB[n][k] += matrixA[n][m] * matrixB[m][k]


# output matrix AxB
for n in range(N):
    for k in range(K):
        print(matrixAB[n][k], end=' ')
    print()
    
