#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
	int j,count,max,asc1,asc2;
	
	max=0;
	char ch[101],ch1;
	scanf ("%[^\n]", ch);
	//fgets(ch, 100, stdin); 
	for(int i=0;ch[i]!='\0';i++)
	{
		count=0;
     for(int j=0;ch[j]!='\0';j++)
     {
     	//if(isspace(ch[i]))
     	  //   		break;

     	 if(ch[i]==ch[j])
     		count++;
     }
     if(count>max)
     {
     	max=count;
     	ch1=ch[i];
     }
     else if(count==max)
     {
     	asc1=ch1;
     	asc2=ch[i];
     	
     		if(asc2<asc1)
     		{
     			ch1=ch[i];
     		}
     	
     }

	}
	cout<<ch1<<" "<<max<<"\n";
}