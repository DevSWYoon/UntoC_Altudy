N, M = map(int, input().split())
matA = []
for i in range(N):
    matA.append(list(map(int, input().split())))

M, K = map(int, input().split())
matB = []
for i in range(M):
    matB.append(list(map(int, input().split())))   

C = [[0 for i in range(K)] for j in range(N)]

for n in range(N):
    for k in range(K):
        for m in range(M):
            C[n][k] += matA[n][m]*matB[m][k]

for i in C:
    for j in i:
        print(j,end = ' ')
    print()
