// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"number of elements"<<" ";
    int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
    //  for(int i=0;i<n-1;i++){
    //      for(int j=i+1;j<n;j++){
    //          if(arr[i]>arr[j])
    //             swap(arr[i],arr[j]);
    //      }
    //  }
    int ct=1;
    while(ct<n){
        for(int i=0;i<n-ct;i++){
            if(arr[i]<arr[i+1])
             swap(arr[i],arr[i+1]);
        }
        ct++;
    }
     
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
    return 0;
}