#include<vector>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	vector<int>arr;
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	int x=50;
	auto it=find(arr.begin(),arr.end(),x);
	if(it!=arr.end())
	{
		cout<<it-arr.begin();
	}
	else
	{
		cout<<-1;	
	}
    return 0;
}