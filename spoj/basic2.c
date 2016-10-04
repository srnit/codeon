#include<stdio.h>
typedef long long int ll;
int main()
{
  ll i,j,n,m;
  int t;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%lld%lld",&n,&m);
  for(i=1;i<=n;i++)
  {

  for(j=1;j<=m;j++)
  {
    if(i%2==0&&j%2==0)
    {
      printf("*");
    }
    else if(i%2==0&&j%2!=0)
    {
      printf(".");
    }
    else if(i%2!=0&&j%2!=0)
    printf("*");
    else if(i%2!=0 && j%2==0)
    printf(".");
  }
  printf("\n");
}
}
}
