#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,checkpoint=0;;
	long int result,n,m;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>m;
		for(int i=round(sqrt(n));i<=(m/2);i++)
		{
			if((i*i)%m==n)
			{   checkpoint=1;
				result=i;
				break;
			}
		}
		if(checkpoint==1)
			cout<<result<<"\n";
		else
			cout<<"-1"<<"\n";
	}
}