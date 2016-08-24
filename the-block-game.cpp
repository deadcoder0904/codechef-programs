#include <iostream>

using namespace std;

void palindrome(int no){
	int rev=0,temp;
	temp = no;
	while(no){
		rev = rev*10 + no%10;
		no /= 10;
	}
	if(rev == temp)
		cout<<"wins"<<endl;
	else cout<<"losses"<<endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int no;
		cin>>no;
		palindrome(no);
	}
	return 0;
}