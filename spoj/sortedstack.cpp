#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	int t,n,ele;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>ele;
			v.push_back(ele);
		}
		sort(v.rbegin(),v.rend());
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}


	}
}