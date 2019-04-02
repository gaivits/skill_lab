chk = 0
while chk == 0:
	N,D,R =[int(i) for i in input().split()]
	if N == 0 and D == 0 and R==0:
		chk =1
		break
	else:
		arr1=[int(j) for j in input().split()]
		arr2=[int(k) for k in input().split()]

		arr1.sort()
		arr2.sort(reverse=True)
		keep =0
		for i in range(N):
			if arr1[i]+arr2[i]>D:
				SUM = arr1[i]+arr2[i]
				keep+= (SUM-D)*R
		print(keep)
