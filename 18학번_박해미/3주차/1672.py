# 201824484 Park Haemi
# Baekjoon 1672 DNA 해독
# 29640kb 540ms

# get the variable
length = int(input());
dna = input();

dnaTable = [['A', 'C', 'A', 'G'], ['C', 'G', 'T', 'A'], ['A', 'T', 'C', 'G'], ['G', 'A', 'G', 'T']];

def getIndex(dnaChar):
    if (dnaChar == 'A'):
        return 0
    elif (dnaChar == 'G'):
        return 1
    elif (dnaChar == 'C'):
        return 2
    elif (dnaChar == 'T'):
        return 3

for i in range(length-1, 0, -1) :
    An = getIndex(dna[i])
    An_1 = getIndex(dna[i-1])
    newword = dnaTable[An_1][An]
    dna = dna[:i-1] + newword
    
print(dna[0]);
