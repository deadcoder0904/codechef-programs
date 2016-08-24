#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,k,min;
		cin>>n>>k;
		for (int i = 2; i <= k; ++i)
			if (n%i > min)
				min = n%i;
		cout<<min<<endl;
	}
	return 0;
}