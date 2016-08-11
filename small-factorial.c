#include <stdio.h>
int main()
{
	long i=1;
	int n,t;
	scanf("%d",&t);
	while(t){
		scanf("%d",&n);
		while(n){
			i*=n;
			n=n-1;
		}
		printf("%ld\n",i);
		i=1;
		t=t-1;
	}
	return 0;
}