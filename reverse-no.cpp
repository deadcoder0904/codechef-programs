#include <iostream>
#define ll long long

using namespace std;

ll reverse(ll no){
	ll temp=0;
	while(no){
		temp = temp*10 + no%10;
		no /= 10;
	}
	return temp;
}

int main()
{
	int test;
	ll no;
	cin>>test;
	while(test)
	{
		cin>>no;
		cout<<reverse(no)<<endl;
		test--;
	}
	return 0;
}