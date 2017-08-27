#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long int max,n, arr[1001],fre[1000001]={0};
	fre[max]=0;
	cin>>n;
	for(long int i=0;i<n;i++)
	{
		cin>>arr[i];
		fre[arr[i]]+=1;
		if(fre[arr[i]]>=fre[max])
		{
			if(fre[arr[i]]==fre[max])
			{
				max=min(max,arr[i]);
			}
			else
			max=arr[i];
		}
	}
	cout<<max<<"\n";

}