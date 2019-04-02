body,switches= map(int , input().split())
train= []
for n in range(1,body+1):
    train.append(n)
num = 0
for k in range(switches):
    sub1,sub2 = map(int , input().split())#value
    (index1,index2) = (train.index(sub1),train.index(sub2))
    cut1 = train[index1:index2+1]
    del train[index1:index2+1]
    #cut2 = train[index1:index2+1]
    train = train+cut1 
for i in range(len(train)):
    print(train[i])
