#include <iostream>

using namespace std;

int main()
{
	long long int t,n,small;
	cin>>t;
	while(t--){
		cin>>n;
		long long int a[n];
		for (int i = 0; i < n; ++i)
				cin>>a[i];
		small = a[0];
		for (int i = 1; i < n; ++i)
			if (small>a[i])
				small=a[i];
		small*=n-1;
		cout<<small<<endl;	
	}
	return 0;
}