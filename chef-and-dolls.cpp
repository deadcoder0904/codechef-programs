#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = 0;
		for (int i = 0; i < n; i++)
			{
			int temp;
			cin>>temp;
			ans = ans ^ temp;
			}
		cout<<ans<<endl;
	}
	return 0;
}