#include <iostream>
#include <string>

using namespace std;

bool leap(int yr){
	return yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0;
}

int main()
{
	int test,yr,c;
	string days[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	cin>>test;
	while(test--){
		cin>>yr;
		c=yr-1900;
		for (int i = 1904; i < yr; ++i)
			if(leap(i)) c++;
		c = (c+1)%7;
		cout<<days[c]<<endl;
	}
	return 0;
}