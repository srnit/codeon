#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	int arr[n+1];
	int vis[n+1]={1};
	vis[l]=0;
	vis[r]=0;
	int a,b;
	for(int i=1;i<=n;i++)
	{	arr[i]=i;

	}
	a=1;
	b=n;
	if(pos>=r || pos<=l)
		cout<<"1\n";
	else if(l==1 && r==n)
		cout<<"0\n";
	else
	{
		int mov=min(pos-l,r-pos);
		
		int result=2*mov+l-1-1+r-l+n-r-1;
		cout<<result<<"\n";
	}


}