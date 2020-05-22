#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      유지호
#
# Created:     11-05-2020
# Copyright:   (c) 유지호 2020
# Licence:     <your licence>
#------------------------------------------------------------------------------
N=int(input())
def Quad(x,y,n):
    I=[]
    K=[]
    num=1
    while num<=n:
        K=[input()]
        I.append(K)
        num+=1
    T=False
    if n==1:
        print(I[x][y])
    else:
        for i in range(x,x+n):
            if T==True:
                break
            for j in range(y,y+n):
                if I[i][j]!=I[x][y]:
                    print("(", end="")
                    return Quad(x,y,n//2)
                    return Quad(x,y+n//2,n//2)
                    return Quad(x+n//2,y,n//2)
                    return Quad(x+n//2,y+n//2,n//2)
                    print(")", end="")
                    T=True
                    break
    if T==False:
        print(I[x][y])
Quad(0,0,N)




