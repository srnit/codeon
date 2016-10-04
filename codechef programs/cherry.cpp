#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t,num,array[1000000],j;
	int r;
	cin>>t;
	while(t--)
	{
      j=0;
      cin>>num;
      if(num==1)
      	cout<<"0"<<"\n";
      for(ll i=num-1;i!=0;)
      {
      	r=i%5;
      	i=i/5;
      	j++;
      	array[j]=r*2;
      	
      }
      for(ll i=j;i>0;i--)
      	cout<<array[i];
  
	cout<<"\n";
}

}