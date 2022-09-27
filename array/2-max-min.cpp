// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
// int maxNo=arr[0];
// int minNo=arr[0];
int maxNo=INT_MIN;
int minNo=INT_MAX;
// for(int i=0;i<n;i++){
//     if(arr[i]>max)
//      maxNo=arr[i];
//      if(arr[i]<min)
//      minNo=arr[i];
// }
for(int i=0;i<n;i++){
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
}
cout<<"max is: "<< maxNo <<" min is: "<<minNo<<endl; 
}