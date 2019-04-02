init,order = map(int,input().split())
lst= []
lst2 = []
for n in range(1,init+1):
    lst.append(n)
for j in range(order):
    orders, mov1 , mov2 = input().split()
    mov1 = int(mov1)
    mov2 = int(mov2)
    index1,index2 = lst.index(mov1),lst.index(mov2)
    if(orders == 'A'):
        c = lst.pop(index1)
        lst2.append(c)
        lst.insert(index2,c)
    if(orders == 'B'):
        c = lst.pop(index1)
        lst2.append(c)
        lst.insert(index2,c)
for k in range(len(lst)):
    print(lst[k])
