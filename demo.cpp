    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ull;
    const ull MAX = 1e6 + 5;
    ull id[MAX], n,m;
    pair <ull, pair<ull, ull> > p[MAX];
    vector<ull> u;
     
    vector<ull> v[MAX];
    ull vis[MAX];
    vector <ull> temp[100001];
     
    void dfs(ull s)
     {
            vis[s] = true;
           // temp[sub].push_back(s);
            for(ull i = 0;i < v[s].size();++i)
            {
             if(!vis[v[s][i]])
                  dfs(v[s][i]);
            }
    }
     
     
    void initialize()
    {
        for(int i = 0;i < MAX;++i)
            id[i] = i;
    }
     
    ull root(ull x)
    {
        while(id[x] != x)
        {
            id[x] = id[id[x]];
            x = id[x];
        }
        return x;
    }
     
    void union1(ull x, ull y)
    {
        ull p = root(x);
        ull q = root(y);
        id[p] = id[q];
    }
     
    ull kruskal(pair<ull, pair<ull, ull> > p[])
    {
        ull x, y;
        ull cost, minimumCost = 0;
        for(ull i = 0;i < m;++i)
        {
            x = p[i].second.first;
            y = p[i].second.second;
            cost = p[i].first;
            if(root(x) != root(y))
            {
                minimumCost += cost;
                u.push_back(cost);
                union1(x, y);
            }
        }
        return minimumCost;
    }
     
    int main()
    {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        ull x, y,k;
        ull weight, cost, minimumCost;
        initialize();
        cin >> n >> m >>k;
        for(int i = 0;i < m;++i)
        {
            cin >> x >> y >> weight;
            v[x].push_back(y);
            v[y].push_back(x);
            p[i] = make_pair(weight, make_pair(x, y));
        }
        ull sub=0;
        for(ull i=1;i<=n;i++)
        {
           if(!vis[i])
            {
           dfs(i);
           sub++;
            }
            if(sub>1)
            {
            cout<<"-1\n";
            return 0;
            }
        }
     
        sort(p, p + m);
        minimumCost = kruskal(p);
        if(minimumCost<=k)
        {
            cout<<"0\n";
            return 0;
        }
        sort(u.begin(),u.end());
        ull cnt=0;
        for(ull i=u.size()-1;i>=0;i--)
        {
            minimumCost-=(u[i]-1);
            cnt++;
            if(minimumCost<=k)
            {
                cout<<cnt<<endl;
                return 0;
            }
        }
        cout<<"-1\n";
        return 0;
    }