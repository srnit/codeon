#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   char str[1001];
   int i=1;
   while(n--)
   {
   	cin>>str[i];
   	if(i==1)
   	{
   		cout<<i-1<<"\n";
   	}
   	else
   	{
   		int hole=i;
   		temp=str[i];
   		while(hole>0 && (str[hole-1])>temp)
   		{
   		    
   			str[hole]=str[hole-1];
   			
   			hole--;
   		
   			//cout<<str[hole-1]<<" "<<hole<<"\n";
   		//	cout<<int(str[hole-1])>int(str[i]);
   		//	str[hole]=str[i];
   		}
   		str[hole]=str[i];
   		cout<<hole-1<<"\n";

   	}
   	i++;

   } 
}
