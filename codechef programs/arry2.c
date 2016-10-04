#include<stdio.h>
int main(){
	int *i,*j;
	int marks[]={25,50,75,100,125,150};
	i=&marks[0];
	j=&marks[4];
	printf("%d%d",i,j);
	printf("%d%d",j-i,*j-*i);
	return 0;
}