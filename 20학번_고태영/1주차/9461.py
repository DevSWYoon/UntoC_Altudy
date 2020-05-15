# 202055510 KoTaeyoung
# 29380kb 68ms
P = [0 for i in range(100)]
P[0], P[1], P[2] = 1,1,1
for i in range(97):
    P[i+3] = P[i] + P[i+1]

T = int(input())
for i in range(T):
    N = int(input())
    print(P[N-1])