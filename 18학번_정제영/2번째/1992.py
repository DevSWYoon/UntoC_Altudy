def print_mat(m):
    for i in mat:
        for j in i:
            print(j,end = ' ')
        print()

def is_zero(m,n,x,y):
    cheak = True 
    
    if n == 1:
        print(m[x][y],end = '')
        return    
    else:
        for i in range(x,x+n):
            if not cheak:
                break
            for j in range(y,y+n):
                if m[i][j] != m[x][y]:
                    cheak = False
                    break


                
    if cheak:
        print(m[x][y],end = '')
    else:
        nn = n//2

        print("(",end = '')
        is_zero(mat,nn,x,y)
        is_zero(mat,nn,x,y + nn)
        is_zero(mat,nn,x + nn,y)
        is_zero(mat,nn,x + nn,y + nn)
        print(")",end = '')

n = int(input())
mat = []
for i in range(n):
    mat.append(list(map(int, input())))
is_zero(mat,n,0,0)
