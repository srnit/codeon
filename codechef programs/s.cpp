#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll binary_decimal(ll n) /* Function to convert binary to decimal.*/

{
    ll decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
int main()
{
	ll a,b,a1,b1,c;

	int t;
	cin>>t;
   while(t--)
   {
   	c=0;
   	cin>>a>>b;
   	a1=binary_decimal(a);
   	b1=binary_decimal(b);
   	while(a1!=0)
   	{
   		a1=a1/2;
   		c++;
   		if(a1==b1)
   		{
   			cout<< "Lucky Chef" <<"\n";
   			cout<<c<<"\n";
   		}
   		else if (a1==0)
   			cout<<"Unlucky Chef" <<"\n";
   		b1=b1/2;
   	}
   }
	
}