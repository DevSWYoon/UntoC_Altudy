#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     18-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#-------------------------------------------------------------------------------
#202055568 유지호
#Memory:29640KB Time required:656ms, May 18
def DNA(b):
    K=[["","A","G","C","T"],["A","A","C","A","G"],
    ["G","C","G","T","A"],["C","A","T","C","G"],["T","G","A","G","T"]]
    T=False
    if b[-1]==K[0][1] and b[-2]==K[1][0]:
        c="A"
    elif b[-1]==K[0][1] and b[-2]==K[2][0]:
        c="C"
    elif b[-1]==K[0][1] and b[-2]==K[3][0]:
        c="A"
    elif b[-1]==K[0][1] and b[-2]==K[4][0]:
        c="G"
    elif b[-1]==K[0][2] and b[-2]==K[1][0]:
        c="C"
    elif b[-1]==K[0][2] and b[-2]==K[2][0]:
        c="G"
    elif b[-1]==K[0][2] and b[-2]==K[3][0]:
        c="T"
    elif b[-1]==K[0][2] and b[-2]==K[4][0]:
        c="A"
    elif b[-1]==K[0][3] and b[-2]==K[1][0]:
        c="A"
    elif b[-1]==K[0][3] and b[-2]==K[2][0]:
        c="T"
    elif b[-1]==K[0][3] and b[-2]==K[3][0]:
        c="C"
    elif b[-1]==K[0][3] and b[-2]==K[4][0]:
        c="G"
    elif b[-1]==K[0][4] and b[-2]==K[1][0]:
        c="G"
    elif b[-1]==K[0][4] and b[-2]==K[2][0]:
        c="A"
    elif b[-1]==K[0][4] and b[-2]==K[3][0]:
        c="G"
    elif b[-1]==K[0][4] and b[-2]==K[4][0]:
        c="T"
    return c

N=int(input())
D=input()
if N!=len(D):
    print("error")
    quit()
while True:
    if N==1:
        print(D)
        break
    else:
        c=DNA(D)
        D=D[0:-2]
        D=D+c
        N-=1

