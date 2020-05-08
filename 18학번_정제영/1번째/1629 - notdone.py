def mul(a,b,c):
    if b == 0:
        return 1
    return a**b % c

    
s = input()
slist = s.split()

a = int(slist[0])
b = int(slist[1])
c = int(slist[2])
print(mul(a,b,c))
