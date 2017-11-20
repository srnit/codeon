// C++ program to convert fractional decimal
// to binary number
#include<bits/stdc++.h>
using namespace std;
 
// Function to convert decimal to binary upto
// k-precision after decimal point
string decimalToBinary(double num, int k_prec)
{
    string binary = "";
 
    // Fetch the integral part of decimal number
    int Integral = num;
 
    // Fetch the fractional part decimal number
    double fractional = num - Integral;
 
    // Conversion of integral part to
    // binary equivalent
    while (Integral)
    {
        int rem = Integral % 2;
 
        // Append 0 in binary
        binary.push_back(rem +'0');
 
        Integral /= 2;
    }
 
    // Reverse string to get original binary
    // equivalent
    reverse(binary.begin(),binary.end());
 
    // Append point before conversion of
    // fractional part
    binary.push_back('.');
 
    // Conversion of fractional part to
    // binary equivalent
    while (k_prec--)
    {
        // Find next bit in fraction
        fractional *= 2;
        int fract_bit = fractional;
 
        if (fract_bit == 1)
        {
            fractional -= fract_bit;
            binary.push_back(1 + '0');
        }
        else
            binary.push_back(0 + '0');
    }
 
    return binary;
}
 
// Driver code
int main()
{
 
    double n;
    cin>>n;
    int k = 6;
    cout << decimalToBinary(n, k) << "\n";
 
    
    return 0;
}