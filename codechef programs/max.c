#include<stdio.h>
#include<stdlib.h>
int main()
{
int test,n,*array,i,j,count,maxcount,number;
scanf("%d",&test);
while(test>0)
{
maxcount=0;
scanf("%d",&n);
array=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&array[i]);
 
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(array[i]==array[j])
count++;
}
if(count>maxcount)
{
maxcount=count;
number=array[i];
}
else
if(count==maxcount)
{
if(array[i]<number)
number=array[i];
}
}
printf("%d %d\n",number,maxcount);
test--;
}
} 
