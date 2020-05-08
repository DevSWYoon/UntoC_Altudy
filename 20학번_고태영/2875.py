# 202055510 KoTaeyoung
# 29380kb 64ms

N, M, K = list(map(int, input().split()))

cnt=0
while K <= (N+M-3):
    if N>=2 and M>=1:
        N-=2
        M-=1
        cnt+=1
    else:   break
print(cnt)