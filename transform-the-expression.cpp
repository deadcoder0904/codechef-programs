#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		stack<char> s;
		for (int i = 0; i < str.length(); ++i)
		{
			char c = str.at(i);
			if(isalpha(c))
				cout<<c;
			else if(c == ')')
					{
						cout<<s.top();
						s.pop();
					}
				else  if(c != '(')
						s.push(c);		
		}
		cout<<endl;
	}
	return 0;
}
