#메모리:29380KB, 시간:280ms, 코드길이:599B
#2740_행렬 곱셈

N,M=map(int,input().split())
a=[]
for _ in range(N):
    a.append(list(map(int,input().split()))) #a.append(list(input)))처음 앎

M,K=map(int,input().split())
b=[]
for _ in range(M):
    b.append(list(map(int,input().split())))

c=[[0 for _ in range(K)] for _ in range(N)] #☆ for _ in range 하면 ☆을 반복적으로 생성

for n in range(N):
    for k in range(K):
        for m in range(M):
            c[n][k]=c[n][k]+a[n][m]*b[m][k]

for i in c: #c에서 안쪽 리스트를 꺼냄
    for j in i: #안쪽 리스트에서 요소 하나씩 꺼냄
        print(j,end=" ")
    print("")

