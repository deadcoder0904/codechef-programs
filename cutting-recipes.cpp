#include <iostream>

using namespace std;

int gcd(int a , int b){
	return b == 0 ? a : gcd(b,a%b);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int i = 0,ans;
		while(i<n){
			cin>>a[i];
			i++;
		}
		ans = a[0];
		for (int i = 1; i < n; ++i)
			ans = gcd(ans,a[i]);
		for (int i = 0; i < n; ++i)
			cout<<a[i]/ans<<" ";
		cout<<endl;
	}
	return 0;
}