test = int(input())
while test:
	a,b = raw_input().split()
	sum = 0
	for x in xrange(int(a),int(b)+1):
		if str(x) == str(x)[::-1]:
			sum += x
	print(sum)	
	test -= 1