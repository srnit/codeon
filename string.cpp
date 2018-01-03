#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	string s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int found,check;
		char matrix[n+1][m+1];
		for(int i=0;i<n;i++)
		{
			
				scanf("%s",matrix[i]);
		}
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			int index=i%n;
			 check=0;
			 found=0;
            for(int j=0;j<m;j++)
            {
            	if(matrix[index][j]==s[i])
            	{
            		check=1;
            		matrix[index][j]='A';
            		break;
            	}
            }
            if(check==1)
            	found=1;
            else
            {
            	found=0;
            	break;
            }

		}
		if(found==0)
			printf("No\n");
		else if(found==1)
			printf("Yes\n");

	}
}