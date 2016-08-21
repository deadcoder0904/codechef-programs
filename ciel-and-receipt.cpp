#include <iostream>

using namespace std;

int main()
{
	int test;
	cin>>test;
	int arr[12] = {2048,1024,512,256,128,64,32,16,8,4,2,1};
	while(test--){
		int no,c=0,i=0;
		cin>>no;
		while(no != 0)
			if(no - arr[i] >= 0)
			{
			no -= arr[i];
			c++;
			}
			else i++;
		cout<<c<<endl;
	}
	return 0;
}