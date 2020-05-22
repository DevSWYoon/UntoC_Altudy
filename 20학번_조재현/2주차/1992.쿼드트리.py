#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose
#  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-14
#-----------------------------------------------

# 테스트 데이터용, 제출할때는 hide.
with open('quadtree.inp') as inp:
    N = int(inp.readline())
    raw_data = []
    for trial in range(N):
        raw_data.append(inp.readline().strip())

##N/2**trial

##뺵쭌제출용
##N = int(input()) #크기받아와유
##raw_data = []
##for trial in range(N):
##    raw_data.append(int(input()))
print(raw_data)

def checklist(li,n):
    temp1, temp2, temp3, temp4 = [], [], [], []
    n = int(n)
    flag1 = 0
    flag0 = 0
    divide = False
    for trial in range(n//2):
        temp1.append(li[trial][0:n//2])
        if '1' in li[trial][0:n//2] :
            if '0' not in li[trial][0:n//2]: flag1 += 1
            else: divide = True
        else:
            if '0' in li[trial][0:n//2]: flag0 += 1
        if flag1 == n//2: print("(1",end="")
        if flag0 == n//2: print("(0",end="")
        if divide == True:
            checklist(temp1,n//2)

    for trial in range(n//2):
        temp2.append(li[trial][n//2:n])

    for trial in range(n//2,n):
        temp3.append(li[trial][0:n//2])

    for trial in range(n//2,n):
        temp4.append(li[trial][n//2:n])
    print(temp1)
    print(temp2)
    print(temp3)
    print(temp4)



checklist(raw_data,8)


