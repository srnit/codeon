#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,sum,result,check;;
    cin >> n;
    int s[n+1];
    for(int i = 1; i <=n; i++){
       cin >> s[i];
    }
    int d;
    int m;
    cin >> d >> m;
    for(int i=1;i<=n;i++)
      {
         check=0;
         sum=0;
      for(int j=1;j<=n;j++)
          {
            if (i==j)
            {
            }
              else
                sum+=s[i]+s[j];
          if(sum==d && j==m)
              {
              check=1;
              break;
          }
          if(check==1)
              result++;
      }
  }
    cout<<result<<endl;
    return 0;
}
