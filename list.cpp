/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/



//Structure of the linked list node is as
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node * createnode()
{
   struct node *ref=new struct node;
   if(ref)
   {
    cout<<"node is created\n";
    return ref;
}
   else
   cout<<"not\n";

}
// function inserts the data in front of the list
struct node * insertAtBegining(struct node* nodeRef, int newData)
{
    struct node* headRef;
     struct  node *nodeobj;
   
    nodeobj->next=headRef;
    nodeobj->data=newData;
     headRef=nodeRef;
     return headRef;
}
void printList(struct node *node1)
{
  while (node1 != NULL)
  {
     cout<<node1->data<<" ";
     node1 = node1->next;
  }
}

// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    // Code here
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i+=2)
        {
            if(a[i+1]==0)
            {
                struct node *noderef=createnode();
                struct node *ref=insertAtBegining(noderef,a[i]);
                printList(ref);

            }
            else if (a[i+1]==1)
            {
                //insertAtEnd(struct node** headRef, int newData)
            }
        }
    }
}