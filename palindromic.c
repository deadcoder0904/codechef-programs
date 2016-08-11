#include <stdio.h>
#define ll long long
ll reverseNumber(ll j){
	ll temp=0;
	while(j!=0){
		temp = temp*10 + j%10;
		j/=10;
	}
	return temp;
}
int main()
{
	ll j=0,t,s=0,a,b;
	scanf("%lld",&t);
	while(t){
		scanf("%lld %lld",&a,&b);
		s = 0;
		for (j = a; j < b; ++j)
		{
			if(j == reverseNumber(j))
				s += j;
		}
		printf("%lld\n",s);	
		t-=1;
	}
	return 0;
}