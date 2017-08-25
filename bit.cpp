#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,arr[1000005],l,r,result;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	while(q--)
	{
		result=0;
		int c,x;
		cin>>c;
		if(c==1)
		{
			cin>>x;
			if(arr[x]==0)
				arr[x]=1;
			else
				arr[x]=0;
		}
		else
		{
			cin>>l>>r;
			for(int i=l;i<=r;i++)
				result+=arr[i]*pow(2,i-1);
			if(result%2==0)
			cout<<"EVEN\n";
		else
			cout<<"ODD\n";
		}
		
	}

}