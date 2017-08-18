#include<bits/stdc++.h>
using namespace std;
bool visited[100001];
int level[100001];
void initialise()
{
memset(visited,false,sizeof(visited));
memset(level,0,sizeof(level));
}
void dfs(vector<int>vec[],int s,int id)
{
  int check=0;
	visited[s]=true;
  stack<int>st;
  st.push(s);
  while(!st.empty())
  {
    int num=st.top();
    //cout<<num<<"---|"<<"\n";
    st.pop();
    //cout<<"jhgvhj\n";
      for(int i=0;i<vec[num].size();i++)
      {
        //cout<<vec[num][i]<<"\n";
        if(visited[vec[num][i]]==false)
        {
         // cout<<"in\n";
          visited[vec[num][i]]=true;
          st.push(vec[num][i]);
          level[vec[num][i]]=level[num]+1;
          //cout<<level[vec[num][i]]<<"\n";
         
         // return;
        }
          
      }
        
    

  }
    return;
      
  }
   
   

 
	


int main()
{
int a,b,u,v,s,id,q,result,min;
min=100000;
  cin>>a;
  vector<int> vec[a+1];
  
  	for(int i=1;i<a;i++)
  	{
  		cin>>u>>v;
  		vec[v].push_back(u);
  		vec[u].push_back(v);
    }
    initialise();
    cin>>q;
    while(q--)
    {
      cin>>id;
       dfs(vec,1,id);
       //cout<<level[id];
       if(level[id]<=min && level[id]!=0)
       {
        if(level[id]==min)
        {
           if(result>id)
           result=id;
        }
        min=level[id];
         result=id;
        }
        
       }
       
    
    cout<<result<<"\n";

    
   
}
