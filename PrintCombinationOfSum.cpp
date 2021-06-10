#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void PrintCombinationOfSum(int N,vector<int>&ds)
 {
 	if(N==0)
 	{ 
 		for(auto it:ds)
 		{
 			cout<<it<<" ";
		 }
		 cout<<"\n";
	 } 
	 for(int i=1;i<=N;i++)
	 {
	 	ds.push_back(i);
	 	PrintCombinationOfSum(N-i,ds);
	 	ds.pop_back();
	 }
 }
int main()
{
	int N;
	cin>>N;
	vector<int>ans;//to store all the possible combinations
	PrintCombinationOfSum(N,ans);
	return o;  
}
