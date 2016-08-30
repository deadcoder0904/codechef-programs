#include <iostream>
#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
#define equ(x,y) x==y?true:false
#define REP(i,n) for (int i = 0; i < n; ++i)
#define REP1(i,n,step) for (int i = 0; i < n; i+=step)
#define REP2(i,x,y) for (int i = x; i < y; i++)
#define REP3(i,x,y,step) for (int i = x; i < y; i+=step)

using namespace std;

int trackedAndIgnored(int x[], int y[],int min_val, int max_val){
	int c=0;
	REP(i,max_val)
		REP(j,min_val)
			if (x[j] == y[i])
				c++;
	return c;		
}

int untrackedAndUnignored(int x[], int y[],int min_val, int max_val){
	int c=0,max1=0,min1=0;
	REP(i,max_val)
	{
		max1=max(x[i],max1);
		min1=min(x[i],min1);
	}
	REP(i,min_val)
	{
		max1=max(y[i],max1);
		min1=min(y[i],min1);
	}
	REP2(i,min1,max1)
	{
		bool flag=0;
		REP(j,min_val)
			if(equ(x[j],i))
				{flag=1;break;}
		REP(j,max_val)
			if(equ(y[j],i))
				{flag=1;break;}
		if(!flag) c++;
	}	
	return c-1;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[m],b[k],i=0,j=0;
		while(i<m){
			cin>>a[i++];
		}
		while(j<k){
			cin>>b[j++];
		}
		int ti = min(i,j)==i?trackedAndIgnored(a,b,i,j):trackedAndIgnored(b,a,j,i);
		int uu = max(m,k)==m?untrackedAndUnignored(a,b,k,m):untrackedAndUnignored(b,a,m,k);
		cout<<ti<<" "<<uu<<endl;
	}
	return 0;
}