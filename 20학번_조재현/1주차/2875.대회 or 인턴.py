#-----------------------------------------------
# 교수님 보고싶어요 엉엉
# Purpose:  2020 컴퓨터 및 프로그래밍 입문 2020
# Created: 2020-05-08
#-----------------------------------------------

#N,M,K = input().split()
N,M,K = 120,80,80
N,M,K = int(N),int(M),int(K)
Nlarge = False
posN    = N//2
posM    = M
posteam = min(posM,posN) #가능 최대팀수
if posN== max(posM,posN):
    Nlarge = True

if Nlarge == True:
    if 2*(posN-posteam)>=K:
        print(posteam)
    else:
        print(posteam-round((K-2*(posN-posteam))/3))
else:
    if (posM-posteam)>=K:
        print(posteam)
    else:
        print(posteam-round((K-(posM-posteam))/3))



