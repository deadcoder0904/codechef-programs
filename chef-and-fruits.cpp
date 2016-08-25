#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int d = abs(n-m);
		if(k < d)
			cout<<d-k<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}