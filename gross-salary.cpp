#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int s;
		float gs,hra,da;
		cin>>s;
		if(s < 1500)
			{
				hra = 0.9 * s;
				da = 0.1 * s;
				gs = s + hra + da;
			}
		else {
				hra = 500;
				da = 0.98 * s;
				gs = s + hra + da;
			}
		cout<<gs<<endl;	
	}
	return 0;
}