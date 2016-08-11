#include <iostream>
using namespace std;
int main()
{
	int test;
	long long a,b;
	cin>>test;
	while(test){
		cin>>a>>b;
		cout<<a%b<<endl;
		test--;
	}
	return 0;
}