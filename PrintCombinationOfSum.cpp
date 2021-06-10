#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void PrintCombinationOfSum(int N,vector<int>&ds)
 {
	//base case when your N becomes zero we have the combinationn
 	if(N==0)
 	{ 
 		for(auto it:ds)
 		{
 			cout<<it<<" ";
		 }
		 cout<<"\n";
	 } 
	//call all possible 1 to N to get sum N
	 for(int i=1;i<=N;i++)
	 {
	 	ds.push_back(i);
	 	PrintCombinationOfSum(N-i,ds);
	 	ds.pop_back();//whie coming back remove the recent pushed element
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
