#include <stdio.h>

int main()
{
	int j=0,t,s=0,a,b,p,temp;
	scanf("%d",&t);
	while(t){
		scanf("%d%d",&a,&b);
		s = 0;
		for (j = a; j <= b; ++j)
		{
			p=j;
			temp=0;
			while(p!=0){
				temp = temp*10 + p%10;
				p/=10;
			}
			if(j == temp)
				s += j;
		}
		printf("%d\n",s);	
		t--;
	}
	return 0;
}