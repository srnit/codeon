#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left ,*right;
};
struct node* newnode(int data)
{
struct node* node=(struct node*)malloc(sizeof(struct node));
if(node==NULL)
cout<<"something wrong"<<"\n";
else
{
node->data=data;
node->left=NULL;
node->right=NULL;
return node;
}
}
void inorder(struct node* root)
{
if(root==NULL)
return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}
int height(struct node* root)
{
  if(root==NULL)
  return 0;
  return(1+max(height(root->left),height(root->right)));
}

int diameter(struct node * root)
{
  if(root==NULL)
  return 0;
  int lheight=height(root->left);
  int rheight=height(root->right);
  int ldiameter=diameter(root->left);
  int rdiameter=diameter(root->right);
  return(1+max(1+max(lheight,rheight),max(ldiameter,rdiameter)));
}



int main()
{
 struct node *root;
root=newnode(1);
root->left=newnode(2);
root->left->right=newnode(5);
root->left->left=newnode(4);
root->right=newnode(3);
cout<<"inorder traversal"<<"\n";
inorder(root);
cout<<"\n";
cout<<"diameter is :";
cout<<diameter(root)<<" ";

}
