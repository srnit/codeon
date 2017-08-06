#include<bits/stdc++.h>
using namespace std;
int main()
{
	int maxlen,len,sum1,sum2;
	maxlen=len=0;
	int n,arr1[1000],arr2[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<n;i++)
	{
		sum1=sum2=0;
		for(int j=i;j<n;j++)
		{
			sum1+=arr1[j];
			sum2+=arr2[j];
			if(sum1==sum2)
			{
				len=j-i+1;
				if(len>maxlen)
					maxlen=len;
			}
		}
	}
	cout<<maxlen<<"\n";
}