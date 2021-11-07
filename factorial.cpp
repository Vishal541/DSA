#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int n;
int fact(int a){
    if(a!=1){return a*fact(a-1);}
    else{
        return 1;
    }
}
int main()
{   cout<<"Enter the number:";

    cin>>n;
    cout<<"Factorial of number is:"<<fact(n);
    
        return 0;
}