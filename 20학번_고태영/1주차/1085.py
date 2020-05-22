# 202055510 KoTaeyoung
# 29380kb 64ms
x,y,w,h = list(map(int, input().split()))

x_gap = min(w-x, x-0)
y_gap = min(h-y, y-0)

print(min(x_gap, y_gap))