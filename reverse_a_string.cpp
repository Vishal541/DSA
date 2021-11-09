#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int n,a,b;
int main()
{
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;

    cout<<"GCD of given numbers is:"<<gcd(a,b);

    return 0;
}