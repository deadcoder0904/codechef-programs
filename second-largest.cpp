#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cout<<a[1]<<endl;
	}
} 