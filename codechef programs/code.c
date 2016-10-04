#include<stdio.h>
#include<ctype.h>
#include<string.h>
void scna(char *);
int main()
{
int i,t;
char s[210];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%s",s);
scna(s);
}
return 0;
}
void scna(char *j)
{
int i=0,k=0;
if(*(j+1)=='\0')
k++;
//printf("%d",k);
else
{
while(*j!='\0')
{
if(*j==*(j+1))
i++;
else{
if(*(j+1)=='\0')
k++;
else
k+=2;
}
j+=2;
}

//if(i%2==0||k%2==0)
printf("%d",(i+k));

}
}


