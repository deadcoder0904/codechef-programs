def mod(p, n, MOD):
	if p==0:
		return 1
	q=mod(p/2,n,MOD)
	if p%2==0:
		return (q*q)%MOD;
	else:
		return (((q*n)%MOD)*q)%MOD;		
print mod(2,3,3)
# 5,55,221 = 112