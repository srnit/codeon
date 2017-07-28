#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,count;
	string str;
	cin>>q;
	while(q--)
	{
		count=0;
      cin>>str;
      for(int i=0;i<str.length();i++)
      {
      	//cout<<count<<"\n";
      	 if(str[i]=='h' && count==0)
      		count++;
      	 else if(str[i]=='a' && count==1)
      	 	count++;
      	 else if(str[i]=='c' && count==2)
      	 	count++;
      	 else if(str[i]=='k' && count==3)
      	 	count++;
      	 else if(str[i]=='e' && count==4)
      	 	count++;
      	 else if(str[i]=='r' && count==5)
      	 	count++;
      	 else if(str[i]=='r' && count==6)
      	 	count++;
      	 else if(str[i]=='a' && count==7)
      	 	count++;
      	 else if(str[i]=='n' && count==8)
      	 	count++;
      	 else if(str[i]=='k' && count==9)
      	 	count++;
      }
      if(count==10)
      	cout<<"YES\n";
      else
      	cout<<"NO\n";
	}
}