rule=[['A','C','A','G'],['C','G','T','A'],['A','T','C','G'],['G','A','G','T']]
dna=[]

n = int(input())
dna= input()
ans = dna[n-1]


for k in range(0,n-1):
    if dna[n-k-2]=='A':
        j=0
    elif dna[n-k-2]=='G':
        j=1
    elif dna[n-k-2]=='C':
        j=2
    else:
        j=3
        
    if ans=='A':
        i=0
    elif ans=='G':
        i=1
    elif ans=='C':
        i=2
    else:
        i=3

    ans = rule[i][j]

print(ans)

    
    

