#include<bits/stdc++.h>
using namespace std;

void seive1(long long int n)
{
	long long int arr[1000001]={0};
	for(long long int i=2;i*i<1000001;i++)
	{
		if(arr[i]==0)
		{
		for(long long int j=2*i;j<1000001;j+=i)
		{
			
				arr[j]=1;

		}
	}
	}
	long long int count=0;
	
	for(long long int i=2;i<1000001;i++)
	{
		if(arr[i]==0)
			count++;
		if(count==n)
		{
			cout<<i<<"\n";
			break;
		}
	}
}
int main()
{
	long long int n;

	cin>>n;
		seive1(n);
	
}