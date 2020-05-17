#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-15
#-----------------------------------------------

with open('bullae.inp') as inp:
    line = []
    n = int(inp.readline())
    apple = inp.readline().split()
    apple = list(map(int,apple))
    apple.insert(0,"")
    for trial in range(n-1):
        route1, route2 = inp.readline().split()
        route = route1 + "-" + route2
        line.append(route)
        route = route2 + "-" + route1
        line.append(route)
    print(apple)


def manyapple(start,apples):
    apples += apple[start]
    if len(posi_line[start]) == 0:
        print(apples)
    elif len(posi_line[start]) == 1:
        nextapple = posi_line[start][0]
        posi_line[start].clear()
        posi_line[nextapple].remove(start)
        manyapple(nextapple,apples)
    else:
        pass



posi_line = [""]
for a in range(n):
    posi_line.append([])

for point in range(1,n+1):
    for route in line:
        if route[0] == str(point) :
            posi_line[point].append(int(route[2]))
print(posi_line)


print(manyapple(1,0))
