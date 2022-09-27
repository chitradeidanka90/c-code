// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    cout<<"enter array elements : "<<" ";
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"enter testcases : "<<endl;
     int q;
     cin>>q;
     while(q--){
         int x;
         cin>>x;
         int ct=0;
       for(int i=0;i<n;i++){
           if(arr[i]==x)
            ct++;
       }
       cout<<ct<<endl;
     }
    
    return 0;
}