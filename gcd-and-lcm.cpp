#include <iostream>

using namespace std;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b,a%b);
}
 
int main()
{
	int test;
	cin>>test;
	while(test--){
		int a,b,g;
		cin>>a>>b;
		g = gcd(a,b);
		cout<<g<<" "<<a*b/g<<endl;
	}
	return 0;
}