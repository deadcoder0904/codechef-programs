#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int min = 0,max = 0;
		for (int i = 0; i < s1.length(); ++i)
		{
			if (s1.at(i) != '?' && s2.at(i) != '?' && s1.at(i) != s2.at(i))
				min++;
			if(s1.at(i) == '?' && s2.at(i) == '?' || s1.at(i) != s2.at(i))
				max++;
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}