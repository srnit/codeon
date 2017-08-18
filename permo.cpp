#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,num;
	cin>>n;
	int arr[n+1];
   stack<int>st;
	//st.push(-1);
	st.push(0);
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
		
	    
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
	    if(arr[i]!=arr[i+1])
	    count++;
	}
	cout<<count;
	
	//unique(vec.begin(),vec.end());
	cout<<count-1<"\n";

}