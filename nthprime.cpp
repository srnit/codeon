#include<bits/stdc++.h>
using namespace std;
long int arr[1000000001]={0};
void seive1()
{
	for(long int i=2;i*i<1000000001;i++)
	{
		for(long int j=2*i;j<1000000001;j+=i)
		{
			if(arr[j]==0)
				arr[j]=1;

		}
	}
}
int main()
{
	long int n;
	cin>>n;
	long int count=0;
	seive1();
	for(long int i=2;i<1000000001;i++)
	{
		if(arr[i]==1)
			count++;
		if(count==n)
		{
			cout<<i<<"\n";
			break;
		}
	}
}