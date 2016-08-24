#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	while(test--){
		int R;
		cin>>R;
		int x[3],y[3];
		for (int i = 0; i < 3; ++i)
			cin>>x[i]>>y[i];
		bool flag=true;
		for (int i = 0; i < 2; ++i)
			if(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2) > R)
				flag = false;
		if(flag)
			cout<<"yes"<<endl;
		else cout<<"no"<<endl;		
	}
	return 0;
}