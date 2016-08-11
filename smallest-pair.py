t = int(input())
while t:
	n = int(input())
	a = [int(i) for i in raw_input().split()]
	a.sort()
	print(a[0]+a[1])
	t-=1
