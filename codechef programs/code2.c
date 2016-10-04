#include<string.h>
#include<stdio.h>
char s[210];
int t,i,cost=0;
int check[125];
int main()
{
    scanf("%d",&t);
    while(t--)
    {   memset(check,0,sizeof(check));  // setting count of all jewels to zero
        cost=0;
        scanf("%s",s);                  // reading the string
        for(i=0; i<strlen(s); i++)
        {
            if(check[s[i]]==0)
            {
                cost++;                //increase the cost if we are unable to purchase the jewel at a free of cost with Buy1-Get1 offer
                check[s[i]]=1;
            }
            else check[s[i]]=0;        //if we purchase a jewel of same color no need to pay for the current one.
        }
        printf("%d\n",cost);
    }
    return 0;
}
