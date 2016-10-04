#include<stdio.h>
#include<string.h>
#include<assert.h>
typedef long int ll;
//using namespce std;
int main()
{
	char a[1000001],g[1000001];
	ll t,a0,a1,b,c,d,e,f;
	scanf("%ld",&t);
	while(t--)
	{
   a1=a0=b=c=d=e=f=0;
	 scanf("%s",a);
   scanf("%s",g);
    assert(strlen(a)>=1&&strlen(a)<=1000000);
		ll i;
		for(i=0;a[i]!='\0';i++)
		{
      if(a[i]=='1')
        a1++;
      else 
        a0++;
			if(a[i]!=g[i])
               {  b++;
             if(a[i]=='1')
            	c++;
             if(a[i]=='0')
            	d++;
             if(g[i]=='1')
            	e++;
             if(g[i]=='0')
            	f++;
        }
		}
  
  if(i==1)
  {
     if(a[0]==g[0])
      printf("Lucky Chef\n0\n");
     // printf("0\n");
     else
      printf("Unlucky Chef\n");
  }
 else
  {
    if(i==a1||i==a0)
     printf("Unlucky Chef\n");
  
else
{
  printf("Lucky Chef\n");
  if(c>d)
    printf("%ld\n",c);
  else
    printf("%ld\n",d);
}
}


  }

	}


