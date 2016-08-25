#include <iostream>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
	return b == 0 ? a : gcd(b,a%b);
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		ll l,b;
		cin>>l>>b;
		ll k = gcd(l,b);
		cout<<l*b/(k*k)<<endl;
	}
	return 0;
}