#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int Printsum(int ind,int n,int N,vector<int>ds,int a[])
{
	if(ind==n)
	{
		if(N==0)
		{
			for(auto it:ds)
			{
			cout<<it<<" ";	
			}
			cout<<"\n";			
		}
		return 0;
	}
	//logic to pic
	if(a[ind]<=N)
	{
		ds.push_back(a[ind]);
		Printsum(ind,n,N-a[ind],ds,a);
		ds.pop_back();
	}
	//not pic
	Printsum(ind+1,n,N,ds,a);
}
int main()
{//3 sum 4
	int n,N;//n-length of element and N-sum i needed
	cin>>n>>N;
	int a[n];1 2 4
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int>ans;//to store 
	 Printsum(0,n,N,ans,a);
	 return 0;
}
