test = int(input())
while test:
	a,b = raw_input().split()
	for x in xrange(int(a),int(b)):
		sum = 0
		if str(x) == str(x)[::-1]:
			sum += x
		print(sum)	
	test -= 1