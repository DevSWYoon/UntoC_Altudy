def cycle(n):
    cy = 0
    
    
    if n < 10:
        num = n*11
    else:
        one = n % 10
        ten = n // 10
        num = one + ten
        num = num%10 + one*10
    cy = cy + 1
    
    while n != num:
        if num < 10:
            num = num*11
        else:
            one = num % 10
            ten = num // 10
            num = one + ten
            num = num%10 + one*10
        cy = cy + 1
    print(cy)
         
    




n = int(input())
if n >= 0 and n<= 99:
    cycle(n)

