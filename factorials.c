#include <stdio.h>
int main()
{
	int n,num,i,count=0;
	scanf("%d",&n);
	while(n){
		scanf("%d",&num);
		count=0;
		while(num/5>0){
			count += num/5;
			num/=5;
		}
	printf("%d\n",count);	
	n=n-1;
	}
	return 0;
}