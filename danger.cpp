#include<bits/stdc++.h>
using namespace std;
 int Danger(int cost) {
             int  danger_val = 0;
              for ( int i=1;i<=cost;i++) {
                   if(cost%i==0) {
                       danger_val+= 1;
                   }
              }
              return danger_val;
          }
int main()
{
	int n,numoftime,result,l,r,q;
	result=numoftime=0;
	cin>>n;
	int arr[n+1];
	int vis[100005]={-1};
	for(int i=1;i<=n;i++)
		{
		cin>>arr[i];
		arr[i]=Danger(arr[i]);
		}

	cin>>q;
	
	while(q--)
	{
		result=0;
		memset(vis,0,sizeof(vis));
		cin>>l>>r;
       for(int i=l;i<r;i++)
       {
       	if(!vis[arr[i]])
       	{
       	 for(int j=l+1;j<=r;j++)
       	 {
       	 	if(arr[i]==arr[j])
       	 	{
       	 		result+=1;
       	 	}
       	 }
       	 vis[arr[i]]=1;
		
	    }
   	}
	    
	    cout<<result/2<<"\n";
	}
}