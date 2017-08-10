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
void bubblesort(struct node *head)
{
  struct node * temp=head;
  while(temp!=NULL)
  {
    struct node *p=temp->next;
    while(p!=NULL)
    {
      if(temp->data>=p->data)
      {
        int temp1=temp->data;
        temp->data=p->data;
        p->data=temp1;
      }
      p=p->next;
    }
    temp=temp->next;

  }
}
void evenorodd(struct node * temp)
{
  if(temp==NULL)
    {
      cout<<"even\n";
      return;
    }
  else if(temp->next==NULL)
  {
    cout<<"odd\n";
    return;
  }
  evenorodd(temp->next->next);
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
int  findlen(struct node * add)
{
  if(add==NULL)
  {
    //cout<<add->data<<" ";
    return 0;
  }
  else
  {
    //cout<<add->data<<" ";
    return(1+findlen(add->next));
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
int additionofnode(struct node * temp)
{
  if(temp==NULL)
  {
    //cout<<add->data<<" ";
    return 0;
  }
  else
  {
    //cout<<add->data<<" ";
    return(temp->data+additionofnode(temp->next));
  }
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
void duplicate(struct node* p)
{
  struct node* temp;
  if( p==NULL  )
  {
      return;
  }
  else if(p->next==NULL)
    return ;
  //cout<<p->data<<p->next->data;
  if(p->data==p->next->data)
  {
    p->next=p->next->next;


  }
  duplicate(p->next);
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
    cout<<"length->"<<findlen(head)<<"\n";
    evenorodd(head);
    //cout<<"\n";
    cout<<"addition of the node->"<<additionofnode(head)<<"\n";
    //sethead();
    bubblesort(head);
    cout<<"list affter sorting\n";
    traverse(head);
    cout<<"\n";
    duplicate(head);
    cout<<"list affter removing duplicate element\n";
    traverse(head);
    cout<<"\n";
/*
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
    */
}