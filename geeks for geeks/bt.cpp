#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node * left;
  struct node *right;
};
struct node *newnode(int data)
{
  struct node* node=(struct node *)malloc(sizeof(struct node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return node;
}
void printiorder(struct node* root)
{
  if(root==NULL)
  return;
  printiorder(root->left);
  cout<<root->data<<" ";
  printiorder(root->right);
}
void levelorder(struct node *root)
{
  list<int>l(5);
  if(root==NULL)
  return;
  cout<<(root->data)<<" ";
  cout<<(root->left->data)<<" ";
  cout<<(root->right->data);
  levelorder(root->left);
}
int main()
{
  struct node* root;
  root=newnode(1);
  root->left=newnode(2);
  root->right=newnode(3);
  root->left->left=newnode(4);
  root->right->right=newnode(5);
  cout<<"inorder"<<"\n";
  printiorder(root);
  cout<<"level order"<<"\n";
  levelorder(root);
}
