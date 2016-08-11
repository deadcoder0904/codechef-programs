#include <iostream>
using namespace std;
int sum(long long no){
	int temp=0;
	while(no){
		temp += no%10;
		no /= 10;
	}
	return temp;
}
int main()
{
	long long no;
	int test;
	cin>>test;
	while(test){
		cin>>no;
		cout<<sum(no)<<endl;
		test--;
	}
	return 0;
}