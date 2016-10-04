#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll small1(ll a[],int n)
{ int small1,pos;
	small1=a[0];
	pos=0;
	for(int i=1;i<n;i++)
	{
      if(a[i]<=small1)
      
      {	small1=a[i];
      pos=i;}
	}
	return pos;
}
ll delete1(ll a[],ll pos,ll size)
{
	for(int c=pos-1;c<size;c++)
		a[c]=a[c+1];
   
}
int main()
{
	ll n,sum=0;;
	cin>>n;
	ll *a=new ll(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll c=small1(a,n);
	cout<<c<<"\n";
	delete1(a,c+1,n);
	for(int i=0;i<n-1;i++)
		cout<<a[i]<<"\n";
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	cout<<sum;
}