#1992
import sys
    
def quardtree( x, y, N ):
    #base
    if ( N == 1 ):
        print( matrix[x][y] , end='')
        return

    #is compress
    result = -1
    for i in range( N ):
        for j in range( N ):
            if ( matrix[x + i][y + j] != matrix[x][y] ):
                result = 2
                break
    if ( result == -1 ):
        result = matrix[x][y]    

    #print
    if ( result == 0 ):
        print( 0 , end='')
    elif ( result == 1 ):
        print( 1 , end='')
    elif ( result == 2 ):
        print( '(' , end='')
        quardtree( x, y, N//2 )
        quardtree( x, y + N//2, N//2 )
        quardtree( x + N//2, y, N//2 )
        quardtree( x + N//2, y + N//2, N//2 )
        print( ')' , end='')

    return

    
#1. input N & Matrix
N = int(input())

matrix = [[0 for col in range(N)] for row in range(N)]

for r in range(N):
    matrix[r] = list(map(int, sys.stdin.readline().strip()))

#2. execute & output
quardtree( 0, 0, N )
