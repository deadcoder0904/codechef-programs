#include <iostream>

using namespace std;

bool distance_formula(int dx,int dy,int r){
	return dx*dx + dy*dy <= r;
}

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	while(test--){
		int R;
		cin>>R;
		int x[3],y[3];
		for (int i = 0; i < 3; ++i)
			cin>>x[i]>>y[i];
		int no = 0;
		for (int i = 0; i < 3; ++i)
			if(distance_formula(x[i%3]-x[(i+1)%3],y[i%3]-y[(i+1)%3],R))
				no++;
		if(no>1)
			cout<<"yes"<<endl;
		else cout<<"no"<<endl;		
	}
	return 0;
}