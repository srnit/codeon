#include<bits/stdc++.h>
using namespace std;
long long int arr[1000001];
void si()
{
	memset(arr,0,sizeof(arr));
	for(long long int i=2;i<=1000001;i++)
	{
		for(long long int j=2*i;j<=1000001;j+=i)
		{
			if(arr[j]==0)
				arr[j]=1;
		}
	}
}
int main()
{
	long long int t,l,r,result;
	cin>>t;
	si();
	while(t--)
	{
		result=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			if(arr[i]==0)
				result++;
		}
		cout<<result<<"\n";
	}

}