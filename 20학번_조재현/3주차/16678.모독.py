
N = int(input())
li=sorted([int(input()) for trial in range(N)])
li.insert(0,"")
num = 0 ; need = 0
for i in range(N+1):
    if i == 0 : pass
    elif li[i]>= i - num: need += li[i] - (i -num)
    else: num += 1
print(need)



