#include <iostream>
#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
#define equ(x,y) x==y?true:false
#define REP(i,n) for (int i = 0; i < n; ++i)
#define REP1(i,n,step) for (int i = 0; i < n; i+=step)
#define REP2(i,x,y) for (int i = x; i < y; i++)
#define REP3(i,x,y,step) for (int i = x; i < y; i+=step)

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[100]={0},no;
		while(m--){
			cin>>no;
			a[no-1]=1;
		}
		while(k--){
			cin>>no;
			a[no-1]+=2;
		}
		int ti=0;//Tracked & Ignored
		int uu=0;//Untracked & Unignored
		REP(i,n){
			if(equ(a[i],3)) ti++;
			if(equ(a[i],0)) uu++;
		}

		cout<<ti<<" "<<uu<<endl;
	}
	return 0;
}