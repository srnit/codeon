#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int count=0;
  string str;
int i=0;
std::getline(std::cin, str[i++]);
  count++;


  int n=count/2;
  for(int i=n;i<=count;i++)
    cout<<str[i]<<"\n";
  for(int i=1;i<=n;i++)
   cout<<str[i]<<"\n";
}