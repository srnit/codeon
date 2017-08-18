#include<bits/stdc++.h>
using namespace std;
#define N 20
#define Max 80
int seg_tree[4*N];
int arr[N];

void build(int node,int s,int l)
{
	
	if(s==l)
		seg_tree[node]=arr[s];

	else
	{
		build(2*node,s,(s+l)/2);
		build(2*node+1,((s+l)/2)+1,l);
	seg_tree[node]=seg_tree[2*node]+seg_tree[2*node+1];
	//return;
}

}

int query(int node,int l,int r,int s,int e)
{
	if(s>l || e<l)
		return 0;
	else if(s<= l && r <= e)
		return seg_tree[node];
	
		int m=(s+e)/2;
		return (query(2*node,l,m,s,e)+query(2*node+1,m+1,r,s,e));
	
}
void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
        arr[idx] += val;
        seg_tree[node] += val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        seg_tree[node] = seg_tree[2*node] + seg_tree[2*node+1];
    }
}
void updateRange(int node, int start, int end, int l, int r, int val)
{
    // out of range
    if (start > end or start > r or end < l)
        return;

    // Current node is a leaf node
    if (start == end)
    {
        // Add the difference to current node
        seg_tree[node] += val;
        return;
    }

    // If not a leaf node, recur for children.
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);
    updateRange(node*2 + 1, mid + 1, end, l, r, val);

    // Use the result of children calls to update this node
    seg_tree[node] = seg_tree[node*2] + seg_tree[node*2+1];
}

int main()
{
	int n,l,r,q;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	build(1,0,n-1);
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		int result=query(1,l,r,0,n-1);
		cout<<result<<"\n";
		updateRange(1,0,n-1,2,4,1);
		//cin>>l>>r;
		//int result=query(1,l,r,0,n-1);
	}
}