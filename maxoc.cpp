#include<bits/stdc++.h>
using namespace std;

int fre[100];
int hashfun(char c)
{
	return (int(c)-31);
}
int main()
{
	string str;
	int index;
	getline(cin, str);
	int set1[100]={0};
	memset(fre,0,sizeof(fre));
     //cout<<str.length()<<" ";
	for(int i=0; str[i]!='\0';i++)
	{ 

         index=hashfun(str[i]);

		////cout<<index<<" ";
		
		//cout<<str[i]<<" ";
		if( set1[index]==1)
			continue;

		
	    
	     else if(set1[index]==0)
			{
			 set1[index]=1;
			
	

		
	
			for(int j=0;str[j]!='\0';j++)
			{
				if(str[i]==str[j])
					fre[index]++;

			}
		}
	}
	int max=0;
	for(int i=0;i<100;i++)
	 {
	 	 index=hashfun(str[i]);

        if(fre[index]>fre[max])
        	max=index;
        if(fre[index]==fre[max])
        {
        	if(max>index)
        		max=index;
        }

	 }
	 cout<<char(max+31)<<" "<<fre[max]<<"\n";


}