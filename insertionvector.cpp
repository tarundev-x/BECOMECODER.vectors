#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve={10,20,30};
	ve.insert(ve.begin(),2,100);//innserting 100
		for(auto it:ve)
		{
			cout<<it<<" ";
		}
	return 0;
}
