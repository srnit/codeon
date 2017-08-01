    #include <bits/stdc++.h>
    using namespace std;
    #define mod 1000000007
    #define FOR(i,n) for(int i=0;i<n;i++)
    #define pb push_back
    #define mk make_pair
     
    // sometimes I believe compiler ignores all my comments
     
    bool visited[10005];
     
     int bfs(vector<int> v[],int dist[],int des)
    {
                    memset(visited,false,sizeof(visited));

        queue <int> q;
        dist[1]=0;
        q.push(1);
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            if(top==des)
                break;
            for(int i = 0; i < v[top].size(); i++)
            {
                if(!visited[v[top][i]])
                {
                    dist[v[top][i]] = dist[top]+1;
                    visited[v[top][i]] = true;
                    q.push(v[top][i]);
                }
            }
        }
    return 0;
    }
     
    int main() 
    {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        int n, m, x, y;
            int dist[10005];
            vector <int> v[10005];

        cin>>t;
       for(int i=0;i<t-1;i++)
        {
            
           
                cin >> x >> y;
                v[x].pb(y);
                v[y].pb(x);
            
        }
        int q,min=1000000;
        cin>>q;
        int a[q];
        
        for(int i=0;i<q;i++)
    { 
        cin>>a[i];
        bfs(v,dist,a[i]);
        int res=a[i];
            if(dist[res]<=min)
                min=dist[res];
    }
    cout<<min<<"\n";
    return 0;
    }