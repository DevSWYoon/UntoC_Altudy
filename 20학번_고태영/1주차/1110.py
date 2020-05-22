# 202055510 KoTaeyoung
# 29380kb 64ms
N = input()
tmp = ""
if int(N) < 10:
    N = "0" + N
cnt= 0

while tmp != N:
    if cnt == 0:  tmp = N
    N_sum = str(int(tmp[0]) + int(tmp[1]))
    if int(N_sum) >= 10 : N_sum = N_sum[1]
    tmp = tmp[1] + N_sum
    cnt +=1

print(cnt)