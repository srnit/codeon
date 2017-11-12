#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <int, pair<int, int> > p[MAX];
int minimumCost[MAX];


void initialize()
{
    for(int i = 0;i < MAX;++i)
     
     {   id[i] = i;
    minimumCost[i]=0;
}
}

int root(int x)
{
    while(id[x] != x)
    {
        x= id[id[x]];
       
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

int kruskal(pair<int, pair<int, int> > p[])
{
    int x, y;
    int cost;
    int index=0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost[index++]=cost;
            union1(x, y);
        }    
    }
   // return minimumCost;
}

int main()
{
    int x, y;
    int weight, cost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    int q;
    cin>>q;
    int latch[q+1];
    for(int i=0;i<q;i++)
        cin>>latch[i];
     kruskal(p);
   // cout << minimumCost << endl;
     sort(latch,latch+q);
    if(q>nodes-1)
    	q=nodes-1;
    int r_l=0;
    for(int i=0;i<q;i++){
    	if(minimumCost[i]>=latch[r_l])
    	{
    		minimumCost[i]=latch[r_l];
    		r_l++;
    	}
    }
    int sum=0;
    for(int i=0;i<nodes;i++)
    	sum+=minimumCost[i];
    cout<<sum<<"\n";
    return 0;
}