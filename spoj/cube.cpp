#include<bits/stdc++.h>
using namespace std;

int result[1000001]={0};
int k;
void seive()
{
	
	//result[1]=0;
  for(int i=2;i<=100;i++)
  {
  	k=i*i*i;
  	for(int j=k;j<=1000001;j+=k)
  	{
  		if(result[j]==0)
  			result[j]=-1;
  	}
  }
  	k=1;
  for(int i=1;i<=1000000;i++)
  {
  	if(result[i]==0)
  	{
  		result[i]=k;
  		k++;
  	}

  }

  }


int main()
{
  
  int t,n;
  seive();
  cin>>t;
  for(int i=1;i<=t;i++)
  {
  cin>>n;
  if(result[n]!=-1)
  	cout<<"Case "<<i<<":"<<" "<<result[n]<<"\n";
  else
  	cout<<"Case "<<i<<":"<<" "<<"Not Cube Free"<<"\n";
  }

}