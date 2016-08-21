#include <iostream>

using namespace std;

int main()
{
	int n,a,b,s1=0,s2=0,max=0,d;
	cin>>n;
	while(n--){
	  cin>>a>>b;
	  s1 += a;
      s2 += b;
      if(max<(s1-s2))
      {
        max=(s1-s2);
        d=1;  
      }
      else if(max<(s2-s1))
      {
        max=s2-s1;
        d=2;
      }
    }
    cout<<d<<" "<<max<<endl;
	return 0;
}