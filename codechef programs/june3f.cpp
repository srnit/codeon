#include<bits/stdc++.h>
using namespace std;
typedef long  int ll;
int main()
{
  string a,b;
  ll t;
  cin>>t;
  while(t--)
  { ll a0,a1,b0,b1,length;
  	b0=b1=a0=a1=0;
  cin>>a>>b;
  	//getline(cin,a);
  	//getline(cin,b);
// length=a.size();
  //assert(length>=1&&length<=1000000);
  for(ll i=0;a[i]!='\0';i++)
  {
  	if(a[i]!=b[i])
  	{
       
       	b0++;
       
       
     }

  	 else if(a[i]!=b[i])
  	
  	{
    // A[i]=a[i];
     // B[i]=b[i];
  		if(a[i]=='1'&&b[i]=='0')
  			a0++;
  		else if(a[i]=='0'&&b[i]=='1')
  			a1++;
  	}
  
  }
  if(a1!=0&& a0!=0)
  {
  	if(a1==a0&&a1==2)
  	{
  		cout<<"Lucky chef"<<"\n";
  	cout<<1<<"\n";

}
 else if(((b1-a1<=2)||(b0-a0<=2)||(b0-a1<=2)||(b1-a0<=2))&&((b0!=0&&b1!=0)||(b0!=0||b1!=0)))
  		{
  				cout<<"Lucky chef"<<"\n";
  				cout<<b0<<"\n";
  			
  		}
  	 else if(a0>=a1&&a1>a0)
  	
  	{
  	cout<<"Lucky chef"<<"\n";
  	cout<<a0+a1-1<<"\n";
  }
 /* else if(a1>a0)
  {
  	cout<<"Lucky chef"<<"\n";
  	cout<<a1+a0-1<<"\n";
  }*/

  }
 
  	else if(a1==0&&a0==0)
  	{
  		cout<<"Lucky chef"<<"\n";
  		cout<<0<<"\n";
  	}
  	else
  	{
  		cout<<"Unlucky Chef"<<"\n";
  	}

 
}
}
