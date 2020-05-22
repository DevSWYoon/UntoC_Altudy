#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-17
#-----------------------------------------------

def graph(x,y):
    if x == "A": x = 1
    if x == "G": x = 2
    if x == "C": x = 3
    if x == "T": x = 4
    if y == "A": y = 1
    if y == "G": y = 2
    if y == "C": y = 3
    if y == "T": y = 4
    if x == 1 and y == 1: return "A"
    if x == 1 and y == 2: return "C"
    if x == 1 and y == 3: return "A"
    if x == 1 and y == 4: return "G"
    if x == 2 and y == 1: return "C"
    if x == 2 and y == 2: return "G"
    if x == 2 and y == 3: return "T"
    if x == 2 and y == 4: return "A"
    if x == 3 and y == 1: return "A"
    if x == 3 and y == 2: return "T"
    if x == 3 and y == 3: return "C"
    if x == 3 and y == 4: return "G"
    if x == 4 and y == 1: return "G"
    if x == 4 and y == 2: return "A"
    if x == 4 and y == 3: return "G"
    if x == 4 and y == 4: return "T"

N = int(input())
li = list(input())

while True:
    if len(li) == 1:
        print(li[0])
        break
    else:
        a = li[-2]; b= li[-1]
        del(li[-1])
        li[-1] = graph(a,b)





