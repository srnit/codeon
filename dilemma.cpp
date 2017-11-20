    #include<bits/stdc++.h>
    using namespace std;
    #define max 100001
    #define mod1 10000007 
    //typedef pair< pair<int,int> > pii;
    void init(int parent[],int size[],int n)
    {
     for(int i=1;i<=n;i++)
     
     {	parent[i]=i;
      size[i]=1;
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
    	int x=root(parent,u);
    	int y=root(parent,v);
       if(size[x]<size[y])
      {
        parent[x]=parent[y];
        size[y]+=size[x];
      }
      else
      {
         parent[y]=parent[x];
        size[x]+=size[y];

      }
    }
    void disjoint(int parent[], pair<int,int>  p[],int m,int size[])
    {
    	long long int sum,mul;
    sum=1;
    mul=1;
    	for(int i=0;i<m;i++)
    	{ //int x=p[i];
    		int u=p[i].first;
    		int v=p[i].second;
    		//cout<<u<<" "<<v<<"\n";
    		if(root(parent,u)!=root(parent,v))
    		{
              //mul=((mul%mod1)*(sum%mod1))%mod1;
               //sum=1;
    			union1(u,v,parent,size);
    		}
    		//sum++;
    	}
    	//cout<<mul%mod1<<"\n";
    }
    int main()
    {
     int n,m,u,v;
     cin>>n>>m;
      pair<int,int>  p[m+1];
     int parent[n+1];
     int size[n+1];
     long long int mul,sum;
     mul=1;
     sum=0;

     init( parent,size,n);
     
     for(int i=0;i<m;i++)
     {
     	cin>>u>>v;
     	p[i]=make_pair(u,v);
     }
     disjoint(parent,p,m,size);
     for(int i=1;i<=n;i++)
     {
      mul=((mul%mod1)*(size[i]%mod1))%mod1;

     }
     cout<<mul<<"\n";
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