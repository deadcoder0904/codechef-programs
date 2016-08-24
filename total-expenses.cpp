#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long q,p;
		long double sum=0;
		cin>>q>>p;
		if(q>1000)
			sum = q * 0.9 * p; 	
		else sum = q * p;
		cout<<fixed<<setprecision(6)<<sum<<endl;
	}
	return 0;
}