#include <stdio.h>
int main()
{
	long no;
	int n,k,i,count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&no);
		if(no%k==0)
			count++;
	}
	printf("%d",count);	
	return 0;
}