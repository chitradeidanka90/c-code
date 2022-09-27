// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//liear time complexity is o(n)
int liear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
      if(arr[i]==key)
       return i;
    }
    return -1;
}
int binary(int arr[],int n,int key){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key)
         return mid;
         else if(key<arr[mid])
          r=mid-1;
          else
          l=mid+1;
    }
    return -1;
}
int main() {
 int n,key;
 cin>>n>>key;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"binary search "<<binary(arr,n,key)<<endl;
  cout<<"linear search "<<liear(arr,n,key)<<endl;
 
}