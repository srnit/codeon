    #include<bits/stdc++.h>
    using namespace std;
    #define max 100001
    #define mod1 10000007 
    //typedef pair< pair<int,int> > pii;
    void init(int parent[],int size[],int n)
    {
     for(int i=1;i<=n;i++)
     
     {	parent[i]=i;
     // size[i]=1;
     }
    }
    int root(int parent[],int x)
    {
    	while(parent[x]!=x)
    	{
    		x=parent[parent[x]];
    	}
    	return x;
    }
    void union1(int u,int v,int parent[],int size[])
    {
    	
        if(root(parent,u)!=root(parent,v))
        {
            int x=root(parent,u);
        int y=root(parent,v);
       if(size[x]<size[y])
      {
        parent[x]=y;
        size[y]+=size[x];
      }
      else
      {
         parent[y]=x;
         size[x]+=size[y];

      }
    }
}
    
    int main()
    {
     int n,m,u,v;
     cin>>n>>m;
      //pair<int,int>  p[m+1];
     int parent[n+1];
     int size[n+1];
     int vis[n+1]={0};
     //long long int mul,sum;
     //mul=1;
     //sum=0;

     init( parent,size,n);
     
     for(int i=0;i<m;i++)
     {
     	cin>>u>>v;
     	vis[u]=1;
        vis[v]=1;
        size[u]=1;
        size[v]=1;
        union1(u,v,parent,size);
     }
    // disjoint(parent,p,m,size);
     for(int i=1;i<=n;i++)
     {
      if(vis[i]==1)
      {
          cout<<size[parent[i]]<<" ";
      }
      else 
        cout<<"0"<<" ";
     }

    
   // sort(parent,parent+n);
     
    /*for(int i=1;i<=n;i++)
    {
    	if(parent[i]!=parent[i+1])
    	{
    		//cout<<sum<<"\n";
    		
    	}
    	else
    	   //sum++;
    }
    */
     
    }