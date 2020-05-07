#메모리:29380KB, 시간:64ms, 코드길이:276B
#직사각형에서 탈출
x,y,w,h =map(int,input("").split())

left=x
right=w-x
up=h-y
down=y
m=0

if left<=right:
    m1=left

else:
    m1=right
    
if up<=down:
    m2=up
    if m2<m1:
        m=m2
    else:
        m=m1
else:
    m2=down
    if m2<m1:
        m=m2
    else:
        m=m1
print(m)
