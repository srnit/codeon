#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	string str;
	string str2="" ;
   cin>>str;
   bool flag =true;
   for(int i=0;i<str.length();i++)
   {
   	//cout<<str[i]<<"\n";
   	if(str[i]=='A')
   		str2+='T';
   else	if(str[i]=='T')
   		str2+='A';
   	else if(str[i]=='G')
   		str2+='C';
   	else if(str[i]=='C')
   		str2+='G';
   	else
   	{
   		flag=false;
   		break;
   	}



   }
   if(flag)
   	cout<<str2<<"\n";
   else
   	cout<<"Error RNA nucleobases found!\n";
}
}