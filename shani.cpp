#include<bits/stdc++.h>
using namespace std;
void shani(long long int a[],int l,int r,int k)
{
	long long int sum=0;
	for(int i=l;i<=r;i++)
	{
		if(a[i]>=k)
		{
			sum+=a[i];
		}
	}
	cout<<sum<<"\n";
}
int main()
{
	int n,q,l,r,k;
	cin>>n;
	long long int a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cin>>q;
	while(q--)
	{
		cin>>l>>r>>k;
		shani(a,l,r,k);
	} 

}