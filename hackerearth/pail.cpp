#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
         string str;
         cin>>str;
         int i=0;;
         int j=str.length()-1;
         while(i!=j)
         {
         	if(str[i]==str[j])
         	{
         		i++;
         		j--;
         	}
         	else
         		break;
         }
         if(i==j)
         	cout<<"YES\n";
         else 
         	cout<<"NO\n";
	}
}