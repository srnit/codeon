#include<bits/stdc++.h>
using namespace std;
int main()
{
	int check,count,n,num,result;
	check=count=0;
	int arr[100005],key,lock_key;
	cin>>key>>lock_key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	queue<int>q;
	long long int  visited[100005];
	//long long int flag[100005];
    //memset(visited,-1,100005*sizeof(flag));
	memset(visited,-1,sizeof(visited));
	q.push(key);
	visited[key]=0;
	while(!q.empty())
	{
		//int result=0;
		 num=q.front();
		//flag[num]=flag[num]+1;
		q.pop();
		      
		 
		//visited[num]=true;
		//count++;
		for(int i=0;i<n;i++)
		{
			
			
			
			    result=(num*arr[i])%100000;
			    if(visited[result]==-1)
			    {
				 //visited[result]=true;
			    
				     q.push(result);
				     visited[result]=1+visited[num];
			    }
			
         if(result==lock_key)
         {
         	check=1;
         	break;
         }

		}
		if(check==1)
			break;
		count=0;
	}
	if(check==1)
		cout<<visited[result]<<"\n";
	else
		cout<<"-1"<<"\n";
}