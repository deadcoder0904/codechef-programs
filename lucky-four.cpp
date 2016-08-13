#include <iostream>
#include <string>

using namespace std;

int count(string no){
	int c = 0;
	for (int i = 0; i < no.length(); ++i)
		if (no.at(i) == '4') c++;
	return c;
}

int main()
{
	int test;
	string no;
	cin>>test;
	while(test--){
		cin>>no;
		cout<<count(no)<<endl;
	}
	return 0;
}