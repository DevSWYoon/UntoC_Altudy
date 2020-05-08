def ppap(n):
    arr = [1,1,1,2,2,3,4,5,7,9]
    i = 10
    while i < 101:
        arr.append(arr[i-1] + arr[i-5])
        i+= 1
    print(arr[ n - 1])
t = int(input())

for i in range (t):
    n = int(input())
    ppap(n)
