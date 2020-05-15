#시간 초과
#13277_큰 수 곱셈

def karatsuba(a,b):
    sa,sb=str(a),str(b)
    la,lb=len(sa),len(sb) #숫자를 문자열로 바꾸어 자리수 세는 아이디어

    if la==1 or lb==1:
        return a*b

    #Divide
    m=min(la,lb)//2
    a,b=int(sa[:-m]),int(sa[-m:]) #리스트 슬라이싱
    c,d=int(sb[:-m]),int(sb[-m:])

    #Conquer
    ac = karatsuba(a,c) #재귀적 호출
    bd = karatsuba(b,d)
    ad_bc = karatsuba(a+b,c+d)-ac-bd

    #Combine
    return 10**(2*m)*ac+10**m*ad_bc+bd

a,b=map(int,input("").split())

print(karatsuba(a,b))

#구글링으로 코드 참고했습니다 
