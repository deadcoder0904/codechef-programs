#include <iostream>
using namespace std;

int main()
{
	long no;
	int count=0,i,n,k;
	cin>>n>>k;
	for(i=0;i<n;i++)
		{
			cin>>no;
			if(no%k==0)
				count++;
		}
	cout<<count;	
	return 0;
}