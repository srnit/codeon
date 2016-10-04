#include<stdio.h>
#define max1 1000000007
using namespace std;
int main()
{
  long long int  t,n,y,sum;
scanf("%lld",&t);
while(t--)
{
  sum=0;

scanf("%lld",&n);
for(int i=1;i<=n;i++)
{
y=n/i;
sum=sum+i*y;
}
printf("%lld\n",sum%max1);
}
}
