#include<bits/stdc++.h>
using namespace sdt;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,q;
		cin>>n;
	long long int w[n+1];
	for(int i=1;i<=n;i++)
		cin>>w[i];
	cin>>p>>q;
	cout<<abs(w[p]-w[q])<<"\n";

}
}