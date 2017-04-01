#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int b,power;
	int t,a,rem;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(b==0)
			cout<<"1"<<"\n";
		else
		{
			
           	rem=b%4;
     power=pow(a,rem);
     cout<<power%10<<"\n";
 }
	}

}