#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> arr[1000000001];
void sieve()
{
	memset(arr,0,sizeof(arr));
	for(ll i=2;i<=10000001;i++)
	{
		if(arr[i]==0)
		{
			for( ll j=2*arr[i];i<=10000001;j+=arr[i])
			{
				if(j%arr[i]==0)
					arr[j]=1;
			}
		}
	}
}

/*bool isprime(ll num)
{
	for(ll i=2;i*i<=num;i++)
	{
		if(num%i==0)
			return false;
	}
	return true;
}
*/
int main()
{

	ll num;
	//sieve();
	cin>>num;
	if(num==0 || num==1)
		cout<<"2\n";
	
	
	else
	{
		for(ll i=num;i<=20000001;i++)
		{
			if(arr[i]==0)
			{
				cout<<i-num<<"\n";
				break;
			}
		}
	}
	
}