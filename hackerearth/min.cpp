#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n;
	 cin>>n;
	long long int arr[n+1];
	long long int minimum=1e9+7;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		minimum=min(minimum,arr[i]);
	}
	//cout<<min<<"\n";
	vector<int> index;
	//int j=1;
	for(int i=1;i<=n;i++)
	{
      if(arr[i]==minimum){
      	index.push_back(i);
      }

	}
	//sort(index.begin(),index.end());
	long int min1=1e9+7;
	for(int i=0;i<index.size()-1;i++)
	{
		//cout<<index[i]<<" "<<index[i+1]<<"\n";
      if(min1>abs(index[i+1]-index[i]))
      	min1=abs(index[i+1]-index[i]);
	}
  cout<<min1<<"\n";
}