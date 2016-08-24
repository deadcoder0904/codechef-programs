#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int h,t;
		float cc;
		bool a=false,b=false,c=false;
		cin>>h>>cc>>t;
		if(h > 50)
			a = true;
		if(cc < 0.7)
			b = true;
		if(t > 5600)
			c = true;
		if(a && b && c)
			cout<<"10"<<endl;
		else if(a && b)
				cout<<"9"<<endl;
			 else if(b && c) 
				 	cout<<"8"<<endl;
				  else if(a && c)
					cout<<"7"<<endl;
						else if(a || b || c)
							cout<<"6"<<endl;
							else cout<<"5"<<endl;					
	}
	return 0;
}