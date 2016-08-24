#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int i;
		string x,y;
		cin>>x>>y;
		for (i = 0; i < x.length(); ++i)
			if (x.at(i) == '?' || y.at(i) == '?')
				continue;
			else if(x[i] != y[i])
					break;
		if(i == x.length())
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;			
	}
	return 0;
}