#메모리:29380KB, 시간:72ms, 코드길이:226B
#파도반 수열
def tell(a):
    return P[a]

P=[0 for i in range(101)]
P[1]=1
P[2]=1
P[3]=1
P[4]=2
P[5]=2

for i in range (6,101,1):
    P[i]=P[i-1]+P[i-5]


num=int(input(""))
i=0
while i<num:
    i=i+1
    a=int(input(""))
    print(P[a])



