#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,planet;
	cin>>t;
	while(t--)
	{
		long long int result=0;
      cin>>n;
      planet=n;
      for(int i=1;i<=n;i++)
      {
      	//cout<<planet<<" ";
      	if(planet>0)
      	{
      	if(planet>=i)
      	{
      		result+=i*i;

      	}
      	else if(planet<i)
      		result+=planet*i;

      	planet-=i;
      }
      else
      	break;

      }
      cout<<result<<"\n";
   }
}