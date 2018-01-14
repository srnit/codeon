#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,p,q;
	int t;
	cin>>t;
	while(t--)
	{
	cin>>x>>y;
	cin>>p>>q;
	int difference1=abs(x-p);
	int diff2=abs(y-q);
	int ans=diff2+difference1;
	int difference3=(difference1-diff2);
	ans+=difference3;
	if(ans%2==0)
		cout<<ans<<"\n";
	else
		cout<<ans-1<<"\n";
}
}