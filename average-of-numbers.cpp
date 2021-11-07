#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int n;
int sum =0;

int main()
{
    cout<<"Enter he nmber";

    cin>>n;
    for(int i =1;i<=n;i++){
        sum +=i;
    }

cout<<"average of umbers os :"<<sum/n;

    return 0;
}