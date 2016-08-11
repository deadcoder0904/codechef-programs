#include <stdio.h>
#include <math.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t){
		scanf("%d",&n);
		printf("%d\n",(int)sqrt(n));
		t-=1;
	}
	return 0;
}