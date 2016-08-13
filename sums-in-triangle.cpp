#include <iostream>
#define max(a,b) a>b?a:b

using namespace  std;

int main()
{
	int test,n,**arr;
	cin>>test;
	while(test--){
		cin>>n;
		arr = new int*[n];
		for (int i = 0; i < n; ++i)
			arr[i] = new int[i+1];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j <= i ; ++j)
				cin>>arr[i][j];
		for (int i = n-2; i>=0 ; --i)
			for (int j = 0; j <= i; ++j)
				arr[i][j] += max(arr[i+1][j],arr[i+1][j+1]);
		cout<<arr[0][0]<<endl;
	}
	return 0;
}