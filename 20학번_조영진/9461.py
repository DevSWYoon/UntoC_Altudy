time = int(input())
n = []
for j in range(time):
    a = input()
    if 1 <= int(a) <= 100:
        n.append(a)
    else:
        break

p = [1, 1, 1, 2, 2, 3, 4, 5, 7, 9]

for i in range(time):
    t = int(n[i])
    num1 = 0
    if t <= 10:
        result = p[t-1]
    else:
        for k in range(t-10):
            num1 = num1 + k + 2
        num1 = num1 + 7
        num2 = t - 8
        result = num1 + num2
    print(result)
