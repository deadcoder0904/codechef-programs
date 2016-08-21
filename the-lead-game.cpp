#include <iostream>

using namespace std;

int main()
{
	int n,max=0,newmax,max1 = 0,max2 = 0;
	bool leadplayer;
	cin>>n;
	int a,b,maxlead=0,lead,score1=0,score2=0;
	bool player;
	while(n--){
		cin>>a>>b;
		score1 += a;
		score2 += b;
		if(score1 > score2)
			player = true;
		else player = false;
		if(player)
			newmax = a - b,max1 += newmax;
		else 
			newmax = b - a,max2 += newmax;
		if(max < newmax)
			max = newmax;
		if(score1 - score2 > 0) {
			lead = score1 - score2;
		} else {
			lead = score2 - score1;
		}
		if(maxlead < lead)
		{
			leadplayer = player;
			maxlead = lead;	
		}
	}
	if(leadplayer)
		cout<<"1 "<<max<<endl;
	else cout<<"2 "<<max<<endl;
	return 0;
}