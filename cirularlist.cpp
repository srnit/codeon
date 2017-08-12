#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;
struct node *prevnode;
void sethead()
{
head=NULL;
prevnode=NULL;
}

struct node* createnode(int data)
{
	struct node* n=(struct node *)malloc(sizeof(struct node));
	if(n!=NULL)	
     {n->data=data;
     	n->next=n;
     	return n;
     }
	else
		cout<<"error occured during node creation";

}
void addnode(struct node* ptr)
{
	struct node* temp=head;
	if(head==NULL)
	{
		head=ptr;
		return;
	}
	
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=ptr;
		ptr->next=head;
		//return;
	}
}

void traverse(struct node *ptr1)
{
	while(ptr1->next!=head)
	{
		cout<<ptr1->data<<" ";
		ptr1=ptr1->next;
	}
	cout<<ptr1->data<<"\n";
	return;
}

void addnodebeg(struct node* ptr2)
{
  if(head==NULL)
  {
  	head=ptr2;
  	return;
  }
  else
  {
  	
  	struct node* temp=head;
  	//head=ptr2;
  	ptr2->next=head;
  	//struct node* temp1=head;
  	//head=ptr2;
  	
  	while(temp->next!=temp)
  		temp=temp->next;
  	//head=ptr2;
  	head=ptr2;
  	temp->next=head;
  	
  }
}

int main()
{
	int n,ele;
	cout<<"Adding node at end\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{	cin>>ele;
		struct node* nodeaddr=createnode(ele);
		addnode(nodeaddr);

     }
     cout<<"enterd element is\n";
     traverse(head);
     cout<<"Adding node at begning\n";
     sethead();
	cin>>n;
	for(int i=0;i<n;i++)
	{	cin>>ele;
		struct node* nodeaddr=createnode(ele);
		addnodebeg(nodeaddr);

     }
     cout<<"enterd element is\n";
     traverse(head);

}