#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int check=0;
    char ch[1001];
    scanf("%s",ch);
    for(int i=1;ch[i]!='\0';i++)
    {
      if(ch[i]==ch[i-1])
      {
        check++;

      }
    }
    cout<<check<<"\n";
  }
}
