#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{int n;
char *a,*b,*s;
scanf("%d",&n);
a=(char *)malloc(n*sizeof(char));
b=(char *)malloc(n*sizeof(char));
scanf("%s%s",a,b);
s=(char*)malloc(n*sizeof(char));
s=(int)a-b;
for(i=0;i<n;i++)
if(s[i]==0||s[i]<=0)
s[i]=1;
printf("%s",s);
}

