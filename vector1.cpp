#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve;//create vector
	ve.push_back(10);
    ve.push_back(20);
    ve.push_back(30);
    ve.push_back(40);
    ve.push_back(50);
    ve.emplace_back(60);
    ve.pop_back();
    //print or accces the element in vector
    /*for(int i=0;i<ve.size();i++)
    {
        cout<<ve[i]<<" "; 
    }*/
    //vector<int>arr(3,100);//{100,100,100}
    //vector<int>arr(5);//{0,0,0,0,0}
    vector<int>arr={1,2,3,4};
    //copy one vecttor to other
    vector<int>ve1(ve);//10,20,30,40,50
    vector<int>::iterator it;//ve.end represents last   element  next address
    //cout<<*(it); 
    //it++;
    //cout<<*(it)<<"\n"; 
    /*
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)
    {
        cout<<*(it)<<"\n";
    }
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout<<*(it);
    }
    for(auto it:arr)
    {
        cout<<it;//here it directly brings elements
    }*/
    it=std::find(arr.begin(),arr.end(),3);
    cout<<*(it);
	return 0;
	
}