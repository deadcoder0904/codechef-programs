#include<stdio.h>

int main(){
	int n;
	float balance;
	scanf("%d %f",&n,&balance);
	if((n+0.5)<=balance && n%5==0)
		printf("%.2f",balance-n-0.5);
	else printf("%.2f",balance);
	return 0;
}