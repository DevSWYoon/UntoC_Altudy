def rec(x,y,w,h):
    width = 0
    height = 0
    if abs(w - x) > x:
        width = x
    else:
        width = abs(w - x)

    if abs(h - y) > y:
        height = y
    else:
        height = abs(h - y)

    if width > height:
        print(height)
    else:
        print(width)


num = input()
numlist = num.split()
x = int(numlist[0])
y = int(numlist[1])
w = int(numlist[2])
h = int(numlist[3])

if w <= 1000 and h <= 1000 and x >= 1 and x <= w - 1 and y >= 1 and y <= h - 1:
    rec(x,y,w,h)

