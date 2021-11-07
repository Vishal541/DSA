#include <iostream>
// #include <bits/stdc++.h> 
using namespace std;

int n ;
int largest =0;
int temp=0;

int main()
{

    do{
        cout<<"Enter the number\n";
        cin>>n;
        if(n>temp){
            largest =n;
            // temp = n;
        }else{
            largest = temp;
        }


    }
    while(n!=0);
    
        cout<<"Largest number is:"<<largest<<"\n";
  
}