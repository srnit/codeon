#include<bits/stdc++.h>
using namespace std;
vector<int>ad[100001];
int vis[100001]={0};
int start[100001]={0};
int finish[100001]={0};
 
int tim=1;
//stack<int>st;
void dfs(int s)
{
	start[s]=tim++;
    vis[s]=1;
    for(int i=0;i<ad[s].size();i++)
    {
        if(!vis[ad[s][i]])
        dfs(ad[s][i]);
        
    }
    //st.push(s);
    finish[s]=tim++;
}
int main()
{
    int n,a,b,q;
    
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        ad[a].push_back(b);
        ad[b].push_back(a);
    }
    dfs(1);
    cin>>q;
    int c;
   /* int i=1;
    int arr[n+1];
   while(!st.empty())
   {
     arr[i]=st.top();
     st.pop();
     i++;
   }
   for(int i=1;i<=n;i++)
   	cout<<arr[i]<<" ";
  */
    for(int i=0;i<q;i++)
    {
        
        cin>>c>>a>>b;
         if(c==0){
            if(start[b]>start[a] && finish[b]<finish[a])   cout<<"YES"<<endl;
            else    cout<<"NO"<<endl;
        }   
        else{
            if(start[b]<start[a] && finsih[b]>finish[a])   cout<<"YES"<<endl;
            else    cout<<"NO"<<endl;
        }
        
		
		
        
    }
    
}
 