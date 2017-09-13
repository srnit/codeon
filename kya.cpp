#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{ ll l,r,q,n;
	 cin>>n;
	 ll arr[n+1];
		for(ll i=1;i<=n;i++)
			cin>>arr[i];
		cin>>q;
		while(q--)
		{
			ll result=0;
			cin>>l>>r;
			for(ll i=l;i<=r;i++)
			{
				ll num=arr[i];

				while(num%2==0)
				{
				
                  
                  result++;
                  num=ceil(num/2);
                  //cout<<num <<" ";
				
			    }
			    
			}
			cout<<result<<"\n";
		}
		

}
