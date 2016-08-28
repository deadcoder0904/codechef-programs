#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int N,ans=1,a,b;
		cin>>N;
		for (int i = 2; i <= N; ++i)
			ans ^= i;
		while(N--)
			cin>>a>>b;
		cout<<ans<<endl;
	}
	return 0;
}