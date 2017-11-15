    #include<bits/sdtc++.h>
    using namespace std;
     
    int main()
    {
        int t;
        string S="abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ",s;
        int l = S.length(),i,ind;
        map<char,int> M;
        for(i=0;i<l;i++)
            M[S[i]]=i;
        cin>>t;
        getchar();
        long ans=0;
        int c=0;
        while(t--){
            c=0;
            ans=0;
            ind=0;
            getline(cin,s);
            l=s.length();
            for(i=0;i<l;i++,ind++)
            {
                if(s[i]==' ')
                {
                    c++;
                    ind=-1;
                    continue;
                }
                ans+=M[s[i]];
                ans+=ind;
            }
            c++;
            cout<<ans*c<<endl;
        }
        return 0;
    }Leo60594:Blue60594