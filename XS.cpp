#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,length;
	string str;
	cin>>t;
	while(t--)
	{
		int fre[1001]={0};
      cin>>str;
      length=str.length();
      for(int i=0;i<length;i++)
      {
      	fre[str[i]-'a']++;
      }
      int count=0;
      if(length==1)
      	cout<<"0\n";
      else if(length==2)
      	cout<<"1\n";
      else
      {
      if(length%2!=0)
      {
          int check=0;
          for(int i=0;i<length;i++)
          {
          	if(fre[str[i]-'a']==length)
          		break;
          	else if(fre[str[i]-'a']==1 && check==0)
          		check=1;
          	else if(fre[str[i]-'a']%2!=0)
          		count++;
          }

      }
      else
      {
      	for(int i=0;i<length;i++)
      	{
      		if(fre[str[i]-'a']==length)
      			break;
      		else if(fre[str[i]-'a']%2!=0)
      			count++;
      	}
      }
      cout<<count<<"\n";
  }
      


	}
}