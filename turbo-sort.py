test = int(input())
arr = []
while test:
	no = int(input())
	arr.append(no)
	test -= 1
for x in sorted(arr):
	print(x)