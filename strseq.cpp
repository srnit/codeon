#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,res,l1,l2;
	char str1[101],str2[101];
	cin>>t;
	while(t--)
	{
	    res=0;
	    cin>>l1>>l2;
	    for(int i=0;i<l1;i++)
	    cin>>str1[i];
	    for(int i=0;i<l2;i++)
	    cin>>str2[i];
	    for(int i=0;i<strlen(str1);i++)
	    {
	        for(int j=0;j<strlen(str2);j++)
	        {
	            if(str1[i]==str2[j])
	            res++;
	        }
	    }
	    cout<<res<<"\n";
	    
	}
	return 0;
}