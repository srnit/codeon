#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{int n,i,length,check,l;
	char str[101];
	scanf("%d",&n);
	while(n--)
	{
		check=0;
		scanf("%s",str);
        length=strlen(str);
        if(length==0)
        	printf("No\n");

        else
        {
        	for(i=0;i<length-1;i++)
        	{
        		//printf("%c\n",str[i] );
        		 //printf("-----\n");
        		for(l=i+1;l<=length-1;l++)
        		{
        			//printf(" %c\n",str[l] );
        			if(str[i]==str[l])
        			{
        				//printf("if%c\n",str[l] );
        				check=1;
        				break;
        			}
        			if(check==1)
        				break;
        		}
        	}
    if(check==1)
        	printf("Yes\n");
        else
        	printf("No\n");
	}
}
}