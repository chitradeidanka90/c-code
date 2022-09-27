// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int maxEle(int arr[],int idx,int n){
  
  if(idx == n-1){
    return arr[idx];
  }
   
   
  int mx=maxEle( arr, idx+1,n);
  if(mx>arr[idx])
    return mx;
    else
    return arr[idx];
}

int main() {
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 int m=maxEle(arr,0,n);
 cout<<m<<endl;
}