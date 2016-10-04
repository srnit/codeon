#include<stdio.h>
typedef long long int ll;
int main()
{
  ll i,j,n,m;
  int t;
  scanf("%d",&t);
  while(t--)
  {
    printf("\n");
  scanf("%lld%lld",&n,&m);
  for(i=1;i<=n;i++)
  {

  for(j=1;j<=m;j++)
  {
    if(i==1 ||i==n)
    {
      printf("*");
    }
    else if(j==1 || j==n)
    {
      printf("*");
    }
  else
  printf(".");
  }
  printf("\n");
}

}
}
