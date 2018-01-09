#include<bits/stdc++.h>
using namespace std;
vector<int> computePrefix(string pat){
    int m = pat.size();
    vector<int> longestPrefix(m);
    for(int i = 1, k = 0; i < m; i++){
        while(k > 0 && pat[k] != pat[i]){
            k = longestPrefix[k - 1];
        }
        if(pat[i] == pat[k]){
            longestPrefix[i] = ++k;
        }
        else{
            longestPrefix[i] = k;
        }
    }
    return longestPrefix;
}
void KMP(string str,string pat){
    int n = str.size();
    int m = pat.size();
    int check=0,count=0;
    vector<int> longestPrefix = computePrefix(pat);
    for (int i = 0 ;i<=n-m;i++)
    {

   bool Found = true

    for (int j = i ;j<=i + m-1;j++)
    {

        if (Pat[j-i] != to str[j])
           { Found = False
           }

    if (Found = True) 
        {count = count + 1}
}
   // if(check==1)
}
        cout<<count<<"\n";
   // else
     //   cout<<"Not found !\n";
}
int main()
{
    string str,pat;
      cin>>pat;
    cin>>str;
  
    KMP(str,pat);
}