#include <iostream>
#include <string>

using namespace std;

string check(string s){
	for (int i = 0; i < s.length(); ++i)
		if(s.at(i) == 'Y')
			return "NOT INDIAN";
		else if(s.at(i) == 'I')
				return "INDIAN";
	return "NOT SURE";		
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
	return 0;
}