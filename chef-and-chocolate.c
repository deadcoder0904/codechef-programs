#include <stdio.h>
int main()
{
	int n,m,t;
	scanf("%d",&t);
	while(t){
		scanf("%d %d",&n,&m);
		if((n*m)%2==0)
			printf("Yes\n");
		else printf("No\n");
		t--;
	}
	return 0;
}