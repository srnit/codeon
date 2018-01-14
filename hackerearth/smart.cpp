    #include<bits/stdc++.h>
    using namespace std;
    vector< pair< int, int > > v[104];
    int dijkstra(int src, int des, int parent[]){
        int dis[102] = {0};
        priority_queue< pair< int, int >, vector< pair< int, int> > > pq;
        pq.push(make_pair(INT_MAX, src));
        parent[src] = -1;
        dis[src] = INT_MAX;
        while(!pq.empty()){
            pair< int, int > p = pq.top();
            pq.pop();
            int d = p.first;
            int u = p.second;
            if(d < dis[u])
                continue;
            int sz = v[u].size();
            for(int i=0; i<sz; i++){
                int next = v[u][i].first;
                int nextd = min(v[u][i].second, d);
                if(dis[next] < nextd ){
                    parent[next] = u;
                    dis[next] = nextd;
                    pq.push(make_pair(nextd, next));
                }
            }
        }
        return dis[des];
    }
    int main(){
        int n, m;
        cin >> n >> m;
        int a, b, p;
        for(int i=0; i<m; i++){
            cin >> a >> b >> p;
            v[a].push_back(make_pair(b, p));
            v[b].push_back(make_pair(a, p));
        }
        int src, des, count;
        cin >> src >> des >> count;
        int parent[104];
        int ds = dijkstra(src, des, parent);
        vector< int > res;
        res.push_back(des);
        int par = des;
        while(par != src){
            par = parent[par];
            res.push_back(par);
        }
        int size = res.size();
        for(int i=size-1; i>=0; i--){
            cout << res[i] << " ";
        }
        int ans = count / (ds - 1);
        if(count % (ds - 1))
            ans++;
        cout << endl;
        cout << ans << endl;
        return 0;
    }