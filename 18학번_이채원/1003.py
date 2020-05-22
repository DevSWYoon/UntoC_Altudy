table0=[]
table1=[]
x=[]

def fibo0(n):
    if(n==0):
        return 1
    if(n==1):
        return 0
    if(table0[n]!=-1):
        return table0[n]
    
    table0[n]=fibo0(n-1)+fibo0(n-2)
    return table0[n]

def fibo1(n):
    if(n==0):
        return 0
    if(n==1):
        return 1
    if(table1[n]!=-1):
        return table1[n]
    
    table1[n]=fibo1(n-1)+fibo1(n-2)
    return table1[n]

n = int(input())

for i in range(0,n):
    xe = int(input())
    x.append(xe)
    
for i in range(0,n):
    for j in range(0,x[i]) :
        table0.append(-1)
        table1.append(-1)
    print(fibo0(x[i]),' ',fibo1(x[i]))
    
