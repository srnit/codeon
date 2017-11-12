#include<bits/stdc++.h>
using namespace std;

int Arr[1001];
//int vis[1001]={0};
 bool find1(  int A, int B)                           
    {
    if(Arr[ A ] == Arr[ B ])
    return true;
    else
    return false;   
    }
    //change all entries from Arr[ A ] to Arr[ B ].
    void union1( int A, int B,int N)
    {
        int TEMP = Arr[ A ];
    for(int i = 1; i <= N;i++)
        {
        if(Arr[ i ] == TEMP)
        Arr[ i ] = Arr[ B ]; 
        }
    }
    void count1(int n)
    {
    	int count=0;
    	vector<int>vec;
    	vec.clear();
    	int vis[1001]={0};
    	for(int i=1;i<=n;i++)
    	{
    		count=0;
            int check=0;
    		//if(!vis[Arr[i]])
    		//{
    			//vis[Arr[i]]=1;
            if(Arr[i]==i)
                check=1;
    		for(int j=1;j<n;j++)
    		{
    			if(Arr[i]==Arr[j])
    				count++;
    		}
            if(check==1 && count==1)
                count=0;
    		vec.push_back(count);
    	}
    	//}
    	//sort(vec.begin(),vec.end());
    	vector<int>::iterator it;
    	for(it=vec.begin();it!=vec.end();it++)
    		cout<<*it<<" ";
    }

int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
		Arr[i]=i;
	
	while(m--)
	{
		int a,b;
      cin>>a>>b;
      if(!find1(a,b))
      	union1(a,b,n);
      
      
	
	
    	
    }
    count1(n);
    cout<<"\n";
    }
