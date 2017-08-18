#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;
struct node *prevnode;
struct node* start_second;
void sethead()
{
head=NULL;
prevnode=NULL;
}

struct node* createnode()
{
	struct node* n=(struct node *)malloc(sizeof(struct node));
	if(n!=NULL)
		return n;
	else
		cout<<"error occured during node creation";

}
void traverse(struct node * add)
{
	if(add==NULL)
	{
		//cout<<add->data<<" ";
		return;
	}
	else
	{
		cout<<add->data<<" ";
		traverse(add->next);
	}
	//int length+=1;


}
void addnode(struct node* nodeadd,int ele)
{
  if(head==NULL)
  {
  	nodeadd->data=ele;
  	head=nodeadd;
  	nodeadd->next=NULL;
  }	
  else
  {
  	nodeadd->data=ele;
  	nodeadd->next=head;
  	head=nodeadd;
  }
}
/*
void reverse()
{
	struct node* prevnode;
	struct node* currentnode;
	struct node* nextnode;
	prevnode=NULL;
	currentnode=start_second;
	while(currentnode!=NULL)
	{
		nextnode=currentnode->next;
	   currentnode->next=prevnode;
	   prevnode=currentnode;
	    currentnode=nextnode;
	
   }
   start_second=prevnode;
   //treturn ptr1;
}
*/
void spilitlist(struct node* ptr1)
{
	cout<<"kjaskj";
	struct node* p=ptr1;;
	struct node* q=p;
	while(1)
   	{
   		cout<<p->data;
   		cout<<q->data;
   		p=p->next->next;

		if(p->next==NULL)
		{
            start_second=q->next->next;
            break;
		}
		else if(p==NULL)
		{
			start_second=q->next;

         break;
		}
     q=q->next;

	}
	q->next=NULL;
	//return;
}
int main()
{
	int n,ele;
	cout<<"add element at begining\n";
   cin>>n;
   sethead(); 

   
   for(int i=0;i<n;i++)
   {
   	cin>>ele;
   	struct node* nodeadd=createnode();
   	addnode(nodeadd,ele);

    }
     	//cout<<head<<"\n";
    traverse(head);
    cout<<"\n";
    spilitlist(head);
    //reverse();
     //traverse(start_second);
  }