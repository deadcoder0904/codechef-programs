#include <iostream>
using namespace std;
int main()
{
	short first,last;
	int test;
	long long a;
	cin>>test;
	while(test){
		cin>>a;
		last = a%10;
		while(a>9){
			first = a/10;
			a /= 10;
		}
		first = a;
		cout<<first+last<<endl;
		test--;
	}
	return 0;
}