#include <iostream>

using namespace std;

int main()
{
	int test,num;
	cin>>test;
	while(test--){
		cin>>num;
		int i=2;
		if(num < 2)
			cout<<"no"<<endl;
		else {
			while(num % i != 0)
			i++;
			if(num == i)
				cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
	return 0;
}