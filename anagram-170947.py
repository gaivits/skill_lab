a = int(input())
i = 0
while(i<a):
    s1 = str(input())
    s2 = str(input())
    y = "".join(sorted(s1))
    x = "".join(sorted(s2))
    if(x == y):
        print("ANAGRAM")
    else:
        print("NOT ANAGRAM")
    i = i+1
