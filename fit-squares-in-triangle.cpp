#include <iostream>

using namespace std;

int find(int b){
	if(b <= 1) return 0;
	return (b-2)/2 + find(b-2);
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int b;
		cin>>b;
		cout<<find(b)<<endl;
	}
	return 0;
}