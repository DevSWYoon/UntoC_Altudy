# 202055510 KoTaeyoung
# 29380kb	260ms

N, M = list(map(int, input().split()))
A = []
for i in range(N):  A.append(list(map(int, input().split())))

M, K = list(map(int, input().split()))
B = []
for i in range(M):  B.append(list(map(int, input().split())))

result = [[0 for i in range(K)] for i in range(N)]

for n in range(N):
    for k in range(K):
        for m in range(M):
            result[n][k] += A[n][m] * B[m][k]

for i in result:
    for j in i:
        print(j, end = ' ')
    print()