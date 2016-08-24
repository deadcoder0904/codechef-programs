#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int q,p;
		float sum=0;
		cin>>q>>p;
		if(q>1000)
			sum = q * 0.9 * p; 	
		else sum = q * p;
		cout<<sum<<endl;
	}
	return 0;
}