#include <iostream>
using namespace std;
	
int main()
{
	int test,money,count=0,temp,a[6]={100,50,10,5,2,1};
	cin>>test;
	while(test--){
		cin>>money;
		for (int i = 0; i < 6 && money>0; ++i)
		{
			while(money-a[i] >= 0)
				{
					money-=a[i];
					count++;
				}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}