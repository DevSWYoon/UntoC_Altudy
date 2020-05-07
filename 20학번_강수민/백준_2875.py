#메모리:29380KB, 시간:64ms, 코드길이:298B
#2875_대회 or 인턴
n,m,k=map(int,input().split())

if n+m-k==0:
    print(0)
else:
    leave=n+m-k
    yebiteam=leave//3
    if yebiteam==0:
        print(0)
    else:    
        for i in range (yebiteam, -1, -1):
            if n>=i*2:
                if m>=i:
                    print(i)
                    break
