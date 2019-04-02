c = int(input())
for i in range(c):
    base = int(input())
    num = str(input())
    sums = 0
    i = 0
    num = num[::-1]
    while (i < len(num)):
        print(sums,end = " ")
        sums += ((int(num[i]) * (pow(base,i))))
        i = i+1
    print(sums)
