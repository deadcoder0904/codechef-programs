#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		if(x != 180 && y != 180 && z != 180 && x+y+z == 180)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}