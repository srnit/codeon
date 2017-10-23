#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,t;
	cin>>a>>b;
	int result=0;
	result=gcd(a,b);
	
	cin>>t;
	while(t--)
	{
		int l,r;
		
		int check=0;
		cin>>l>>r;
		int c=0;
		if(result>=l && result<=r)
			cout<<result<<"\n";
		
		else if(result>r)
		{
			for(int i=r;i>=l;i--)
			{
				if(a%i==0 && b%i==0)
					{check=i;
						int c=1;

            						break;

					}
			}
			cout<<check<<"\n";
		}
		else if(c==0)
			cout<<"-1\n";
		//result=0;

	}
	return 0;
}