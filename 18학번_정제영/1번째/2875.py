def greed(n,m,k):
    team = 0
    while n >= 2 and m>= 1:
        n += - 2
        m = m - 1
        team += 1
    while n + m < k:
        n += 2
        m += 1
        team -= 1
    print(team)
     
w = input()
wlist = w.split()

n = int(wlist[0])
m = int(wlist[1])
k = int(wlist[2])

greed(n,m,k)
