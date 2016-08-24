#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int c[28]={0};
		int i;int ans=0;
		for(i=97;i<=122;i++)
		c[i]=0;
		string s;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			c[(int)(s[i])]++;
			ans++;
		}
		int max=-1;
		for(i=97;i<=122;i++)
		{
			if(c[i]>max)max=c[i];
		}
		if(max==ans-max) 
			cout<<"YES"<<endl;	
		else  cout<<"NO"<<endl;
	}
	return 0;
}