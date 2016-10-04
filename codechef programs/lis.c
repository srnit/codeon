#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

int main()
{
typedef struct node *LIST;
LIST head,temp;
int d;
char ch;
head=NULL;
printf("enter a data(y/n)");
scanf("%c",&ch);
fflush(stdin);
while(ch=='y')
{
printf("enter a data");
scanf("%d",&d);
temp=(LIST *)malloc(sizeof(LIST));
temp->data=d;
temp->next=head;
head=temp;
fflush(stdin);
printf("enter more data(y/n)");
scanf("\n%c",&ch);
fflush(stdin);

}
temp=head;
while(temp!=NULL)
{
//printf("data entered is");
printf("%d\n",temp->data);
temp=temp->next;
}
return 0;


}
