#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,c=0;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		if(a % 2 == 0)
			c++;
		else c--;
	}
	if(c > 0)
		cout<<"READY FOR BATTLE"<<endl;
	else
		cout<<"NOT READY"<<endl;
	return 0;
}