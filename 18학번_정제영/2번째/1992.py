def print_mat(m):
    for i in mat:
        for j in i:
            print(j,end = ' ')
        print()

def is_zero(m,n,x,y):
    cheak = True # 판별기 
    
    if n == 1:
        print(m[x][y],end = '') # 1x1 배열인 경우
        return    
    else:
        for i in range(x,x+n):
            if not cheak:
                break
            for j in range(y,y+n):
                if m[i][j] != m[x][y]: 
                    cheak = False
                    break


                
    if cheak: # 배열안에 원소가 모두 통일되어있는 경우
        print(m[x][y],end = '')
    else: # 배열안에 원소가 하나라도 다른것이 있는 경우
        nn = n//2

        print("(",end = '')
        is_zero(mat,nn,x,y) #왼쪽위 
        is_zero(mat,nn,x,y + nn) #오른쪽 위
        is_zero(mat,nn,x + nn,y) # 왼쪽 아래 
        is_zero(mat,nn,x + nn,y + nn) # 오른쪽 아래
        print(")",end = '')

n = int(input())
mat = []
for i in range(n):
    mat.append(list(map(int, input())))
is_zero(mat,n,0,0)
