    #include<bits/stdc++.h>
    #define lli long long int
    #define test()  int test;cin>>test;while(test--)
    const lli MOD = 1000000007ll;
    const int mxsz = 200005;
    using namespace std;
    lli nodes,edges;
    const int MAX = 2e5 + 5;
    typedef pair<long long, lli> PII;
    bool visited[MAX];
    vector <PII> adj[MAX];
    int no;
    int sz;
     
    void DFS1(long long n, lli x)
    {
        sz++;
        visited[n] = true;
        for(lli i = 0; i < adj[n].size(); i++)
        {
            if(!visited[adj[n][i].first] && (adj[n][i].second & x)==adj[n][i].second)
                DFS1(adj[n][i].first, x);
        }
    }
     
    void DFS(long long n)
    {
        no++;
        visited[n] = true;
        for(lli i = 0; i < adj[n].size(); i++)
        {
            if(!visited[adj[n][i].first])
                DFS(adj[n][i].first);
        }
    }
     
    int main()
    {
        std::ios_base::sync_with_stdio(false);
        lli nodes, edges, x, y;
        long long weight, minimumCost,k;
        cin >> nodes >> edges >> k;
        lli ar[k];
        for(int i=0;i<k;i++){
            cin >> ar[i];
        }
        for(lli i = 0;i < edges;++i)
        {
            lli l;
            cin >> x >> y >> l;
            lli weight = 0;
            for(int i=0;i<l;i++){
                int a;
                cin >> a;
                weight = weight | (1LL<<(a-1));
            }
            adj[x].push_back(make_pair(y, weight));
            adj[y].push_back(make_pair(x, weight));
        }
        DFS(1);
        if(no!=nodes){
            cout << "-1";
            return 0;
        }
        lli ans = (1LL<<k)-1,po=0;
        //cout<<ans<<"\n";
        for(int i=k-1;i>=0;i--){
            memset(visited,false,sizeof(visited));
            sz = 0;
            //cout<<ans<<" "<<(1LL<<i)<<" ";
            lli x = ans-(1LL<<i);
            cout<<x<<"\n";
            DFS1(1,x);
            if(sz!=nodes){
                po += ar[i];
                //cout<<po<<"\n";
            }
            else{
                ans = ans-(1LL<<i);
                //cout<<"ans--"<<ans<<"\n";
            }
        }
        cout << po;
        return 0;
    }