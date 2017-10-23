#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

  ll t,result;
  cin>>t;
  while(t--)
  {
  	ll s;
  	cin>>s;
  	ll i=1;
  	result=1;
  	while(1)
  	{
      
     // cout<<result<<"\n";
  		result=i*i*i;
      if(result>=s)
        break;
     else 
     	i++;
     
    //i++;
  	}
  	if(s==1)
  		cout<<"1\n";
  	else
  	cout<<i-1<<"\n";
  }
}