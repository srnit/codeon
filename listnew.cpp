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

}
struct node * addnodeend(struct node*nodeadd,int ele,struct node* p)
{
	if(p==NULL)
	{
	 head=nodeadd;
   nodeadd->data=ele;
   nodeadd->next=NULL;
   }
   else
   {
   	nodeadd->data=ele;
   	nodeadd->next=NULL;
   	p->next=nodeadd;
   }
   return nodeadd;

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
     	cout<<head<<"\n";
    traverse(head);
    cout<<"\n";
    sethead();

cout<<"add element add end\n";
    cin>>n;
   
   for(int i=0;i<n;i++)
   {
   	cin>>ele;
   	struct node* nodeadd=createnode();
   	prevnode=addnodeend(nodeadd,ele,prevnode);

    }
    cout<<head<<"\n";
    traverse(head);
    cout<<"\n";
}