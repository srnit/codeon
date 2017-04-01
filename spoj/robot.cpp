#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch[100];
	int t,left,right,up,down,n,m;
	cin>>t;
	while(t--)
	{
		int check=0;
		cin>>n>>m;
		left=right=up=down=1;
      scanf("%s",ch);
      for(int j=1;j<=m/2;j++)
      {
      	for(int k=1;k<=n/2;k++)
      	{
      		 for(int i=0;ch[i]!='\0';i++)
      {
      	if(ch[i]== 'L')
      		{
      		//count1++;
      		left++;
      		if(left>m )
      			break;
      		right--;

      		
      		}
      	else if(ch[i]== 'R')
      	{
      		//count1--;
      		right++;
      		if(right>m )
      			break;
      		left--;

      	}	

      	else if( ch[i]== 'U')

      		{
      			up++;
      			if(up>n)
      			break;
      			down--;

      		}
      	else if(ch[i]=='D')
      	{
      		//count3--;
      		

      		down++;
      		if(down>n)
      			break;
      		up--;
      	}
      }
  
      if( (left >m ||right >m) || (up>n || down >m))
      {
         check=0;
      	//cout<<"unsafe"<<"\n";
      }
      	
      //else if(up>= n || down >=n)
      	//cout<<"unsafe"<<"\n";
      else
      {
      	check=1;
      	break;
      }
      	}
      	break;
      }
      if(check==1)
      	cout<<"safe"<<"\n";
      else
      	cout<<"unsafe"<<"\n";
     
	}
 
}

