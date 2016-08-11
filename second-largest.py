test = int(input())
while True:
	if test == 0:
		break
	a,b,c = raw_input().split()
	arr = [int(a),int(b),int(c)]
	arr.sort()
	print(arr[1])
	arr = []
	test = test - 1