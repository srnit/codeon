// A recursive program to count numbers with sum
// of digits as given 'sum'
#include<bits/stdc++.h>
using namespace std;
 
// Recursive function to count 'n' digit numbers
// with sum of digits as 'sum'. This function
// considers leading 0's also as digits, that is
// why not directly called
unsigned long long int countRec(int n, int sum)
{
    // Base case
    if (n == 0)
       return sum == 0;
 
    // Initialize answer
    unsigned long long int ans = 0;
 
    // Traverse through every digit and count
    // numbers beginning with it using recursion
    for (int i=0; i<=9; i++)
       if (sum-i >= 0)
          ans += countRec(n-1, sum-i);
 
    return ans;
}
 
// This is mainly a wrapper over countRec. It
// explicitly handles leading digit and calls
// countRec() for remaining digits.
unsigned long long int finalCount(int n, int sum)
{
    // Initialize final answer
    unsigned long long int ans = 0;
 
    // Traverse through every digit from 1 to
    // 9 and count numbers beginning with it
    for (int i = 1; i <= 9; i++)
      if (sum-i >= 0)
         ans += countRec(n-1, sum-i);
 
    return ans;
}
 
// Driver program
int main()
{
    int n = 10000,sum,t;
    cin>>t;
    while(t--)
    {
      cin>>sum;
    cout << finalCount(n, sum);
   // return 0;
  }
}