#include<bits/stdc++.h>
using namespace std;
int main()
{long long int t,n;
  cin>>t;
  string l,l1,l2,l3,l4;
  while(t--)
  {
    //cout<<l.maxsize();
    long long int check,count,la,lb,la1,la3,check1,check2;
    check=count=la=lb=la3=la1=check1=check2=0;
    cin>>l1>>l2>>l3>>n;
    for(long long int i=l3.size()-1;i>=0;i--)
    {
        //cout<<"h"<<"\n";
        if(l3[i]=='0')
            check=1;
         if(l3[i]=='1' && check==1)
            la3++;
    }
   //check=0;
   // cout<<la3<<"\n";
    if(check==1)
      check1=1;
   for(long long int i=l2.length()-1;i>=0;i--)
   {
    if(l2[i]=='0')
      check1=1;
    if(l2[i]=='1')
      la++;
    if(l2[i]=='1' && check1==1)
      lb++;

   }
   
    //l=l+l3;
   // cout<<l<<"\n";
  //check=0;
    if(check1==1)
      check2=1;
   
    for(long long int i=l1.size()-1;i>=0;i--)
    {
        //cout<<"h"<<"\n";
      if(l1[i]=='0')
       check2=1;
        if(l1[i]=='1' && check2==1)
            la1++;
        //else if(l[i]=='1' && check==1)
          //  fdown3++;
    }
    if(check1==1)
    {
      count=(la*(n-1)+lb)+la3+la1;
  cout<<(count+1)<<"\n";

    }
    else
      cout<<(la1+1)<<"\n";


}


}
