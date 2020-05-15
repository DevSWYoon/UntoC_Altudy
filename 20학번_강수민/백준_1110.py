#메모리:29380KB 시간:64ms 코드길이:439B
#더하기 사이클
firstNum=int(input("")) #최초의 수 입력

num1=firstNum #최초의 수=초기 수
i=0
num2=-1

while firstNum!=num2: #나중 수=최초의 수 될 때까지 반복
    i=i+1
    front1=num1//10
    behind1=num1%10
    plus=front1+behind1 #초기 수 각 자리의 합
    behind2=plus%10
    num2=behind1*10+behind2 #나중 수 생성
    num1=num2 #나중 수 -> 초기 수 됨
    

print(i)#사이클의 횟수
