#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {int c[101],c1[7]={0};
    int n,a;
    cin>>n;
    int index1,index2,s;
    index1=index2=s=0;
    for(int k=1;k<=n;k++)
    {int count=0;
for(int z=1;z<=6;z++)
{
  c1[z]=0;
  //c[z]=0;
}

      cin>>c[k];
      for(int j=1;j<=c[k];j++)
        {

        cin>>a;
        if(a==1)
        c1[1]++;
        if(a==2)
        c1[2]++;
        if(a==3)
        c1[3]++;
        if(a==4)
        c1[4]++;
        if(a==5)
        c1[5]++;
        if(a==6)
        c1[6]++;
        }

    //    for(int j=1;j<7;j++)
  //      cout<<c1[j]<<" ";
      //int y=1;  //cout<<"\n";

while(1)
{
  int low=99;
//  cout<<"vniuh";
count=0;
      for(int i=1;i<7;i++)
      {
//        printf("xxxxx %d\n",c1[i]);
        if(c1[i]>0 && low>c1[i])
        low=c1[i];
        if(c1[i]>0)
        count++;
      }
    //  cout<<"lo1"<<low <<" cou="<<count<<"\n";

      for(int i=1;i<7;i++)
      c1[i]=c1[i]-low;

      if(count==4)
      c[k]+=low;
      else if(count==5)
      c[k]+=2*low;
      else if(count==6)
      c[k]+=4*low;
      else
      break;

}

        //    cout<<c[k]<<"\n";
            if(c[k]>=s)
            {
              s=c[k];
              index2=index1;
              index1=k;
            }
    }//1st loop
    if(c[index1]==c[index2])
    cout<<"tie"<<"\n";
    else if(index1==1)
    cout<<"chef"<<"\n";
    else
    cout<<index1<<"\n";
  }//while
}
