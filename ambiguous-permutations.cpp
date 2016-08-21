#include <iostream>
#include <vector>

using namespace std;

bool check_ambiguous(vector<int> &arr){
	vector<int> inverse(arr.size());
	for (int i = 0; i < arr.size(); ++i)
		inverse[arr[i]-1]=i+1;
	for (int i = 0; i < arr.size(); ++i)
		if (arr[i] != inverse[i])
			return false;
	return true;	
}

int main()
{
	int no;
	cin>>no;
	while(no){
		vector<int> arr(no);
		for (int i = 0; i < no; ++i)
			cin>>arr[i];
		if(check_ambiguous(arr))
			cout<<"ambiguous"<<endl;
		else cout<<"not ambiguous"<<endl;
		cin>>no;
	}
	return 0;
}
/*
1 4 3 2

in[0]=1
in[3]=2
in[2]=3
in[1]=4

*/