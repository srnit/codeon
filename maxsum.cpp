#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t,currmax,max_sofar;
	long long int *arr;
	cin>>t;
	while(t--)
	{
		cin>>n;
		arr=(long long int *)malloc(n*sizeof(long long int));
		for(long long int  i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		currmax=max_sofar=0;
		for(long long int i=0;i<n;i++)
		{
			currmax=max(currmax+arr[i],arr[i]);
			if(currmax>max_sofar)
				max_sofar=currmax;
		}
		cout<<max_sofar<<"\n";
	}
}