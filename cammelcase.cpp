#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int i=0,count=0;
  while(str[i])
  {
  	if(i==0 && islower(str[i]))
  		count++;
  	else if (isupper(str[i]))
  		count++;
  	i++;
  }
  cout<<count<<"\n";
}