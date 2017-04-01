#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,a,b;
 
	cin>>t;
	vector<int>aarr(t+1);
	for(int i=1;i<=t;i++)
	{
		cin>>arr[i];
	}
	cin>>q;
	while(q--)
	{
		int count =0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
		index=find(arr.begin()+a,arr.begin()+b,arr[i]);
		arr.erase(arr.begin()+index);
		cout<<index<<arr[index];
		count++;
	}
	cout<<count<<"\n";
	}
}