#include<bits/stdc++.h>
using namespace std;
int main()
{
			ios_base::sync_with_stdio(0); 

	int n,q,num;
	int fre[100005]={0};
	cin>>n;
	int arr[n+1];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		fre[arr[i]]+=1;
	}
	cin>>q;
	while(q--)
	{
		cin>>num;
		if(fre[num]==0)
			cout<<"NOT PRESENT\n";
		else
		cout<<fre[num]<<"\n";
	}

}