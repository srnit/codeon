#include<stdio.h>
#include<string.h>
 void main()
 {

char str[100],cs[10][10];
int l,x=0,y=0,i,j=1,m;

printf("Enter string ");
scanf("%[^\n]s",str);

l=strlen(str);

for(i=0;i<l;i++)
{
	
	if(str[i]!=' ' || str[i]!='\t')
	{
     
     cs[x][y]=str[i];
     y++;

	}
	cs[x][y]='\0';

	if(str[i]=='\t' || str[i]==' ')
	{
      
      x++;
      y=0;

	}

}
cs[x][y]='\0';
// printf("%c",cs[3][4]);
for(i=0;i<=x;i++)
{
	for(j=i+1;j<=x;j++)
	{
	if(strcmp(cs[i],cs[j])==0)
	{
		
		for(m=j;m<=x;m++)
		{
			strcpy(cs[m],cs[m+1]);}
			x--;
		
	}
}

}
for(i=0;i<=x;i++)
{
	printf("%s ",cs[i]);
}



 }