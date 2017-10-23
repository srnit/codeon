    #include <bits/stdc++.h>
    using namespace std;
    map<char,char>mp,mp1;
    int main()
    {
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          char a,b;
          cin>>a>>b;
          a=toupper(a);
          b=toupper(b);
         
          if(mp.find(a)==mp.end() && mp.find(b)==mp.end())
          {
          	mp[a]=b;
            mp[b]=a;
              
          }
          else if(mp.find(a)!=mp.end() && mp.find(b)==mp.end())
          {  
              mp[b]=mp[a];
          mp[a]=b;
              
          }
          else if(mp.find(a)==mp.end() && mp.find(b)!=mp.end())
          {  
              mp[a]=mp[b];
          mp[b]=a;
              
          }
          else if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end())
          {  char temp=mp[b];
             mp[b]=mp[a];
             mp[a]=temp;
          }
          else{}
         
          
      }
      map<char,char>::iterator it;
      for(it=mp.begin();it!=mp.end();it++)
      {
          mp1[it->second]=it->first;
      }
      string s;
      cin>>s;
      for(int i=0;i<s.size();i++)
      {   char ch=tolower(s[i]);
          if(mp1.find(ch)!=mp1.end())
          {    //cout<<90;
               if(s[i]>='a' && s[i]<='z')
              s[i]=mp1[ch];
              else
              s[i]=mp1[ch]-32;
          }
      }
      cout<<s<<"\n";
      //mp.clear();
       return 0;
    }