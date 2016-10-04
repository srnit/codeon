#include<bits/stdc++.h>
using namespace std;
void sieve(bool prime[])
{
  for(int i=2;i<=100;i++)
  {
    if(prime[i]==true)
    {
      for(int j=i*i;j<=10009;j+=i)
      {
        prime[j]=false;
      }
    }

  }
}
void disectnum(int digit[],int num)
{int k=3;
  while(num)
  {
  digit[k]=num%10;
  num=num/10;
  k--;
  }
}
int constructnum(int digit[])
{int num=0;
  for(int i=0;i<=3;i++)
  {

    num=num*10+digit[i];
  }
  return num;
}
int main()
{
int test_case;
cin>>test_case;
bool prime[10009];
  memset(prime,true,sizeof(prime));
  sieve(prime);
while(test_case--)
{int a,b,dist[10009],digit[4];
memset(dist,-1,sizeof(dist));
cin>>a>>b;
dist[a]=0;
queue<int>q;
q.push(a);
while(!q.empty())
{int num=q.front();
for(int k=3;k>=0;k--)
{
  disectnum(digit,num);
  for(int i=0;i<=9;i++)
  {
    digit[k]=i;
  int temp=constructnum(digit);
    if((prime[temp])&&dist[temp]==-1&&temp>=1000)
    {
      dist[temp]=dist[num]+1;
      q.push(temp);
    }
  }
}
q.pop();
}
if(dist[b]!=-1)
{
  cout<<dist[b]<<"\n";
}
else
cout<<"Impossible"<<"\n";
}

}
