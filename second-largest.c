#include <stdio.h>
void swap(long *a,long *b){
	long temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort(long a[],int n){
	int i,j;
	for (i = 0; i < n; ++i)
		for (j = 0; j < i; ++j)
			if (a[i] < a[j])
				swap(&a[i],&a[j]);
}
int main()
{
	long arr[3];
	int test,no;
	scanf("%d",&test);
	if(test >= 1 && test <= 1000)
		while(test){
			scanf("%ld %ld %ld",&arr[0],&arr[1],&arr[2]);
			sort(arr,3);
			printf("%ld",arr[1]);
			test -= 1;
		}
	return 0;
}