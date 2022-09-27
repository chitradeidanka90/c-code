// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int N=1e7+10;
int hsh[N];
//time complexity O(N)+O(Q)=0(N) 
int main() {
    cout<<"enter array elements : "<<" ";
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
         hsh[arr[i]]++;
     }
     cout<<"enter testcases : "<<endl;
     int q;
     cin>>q;
     while(q--){
         int x;
         cin>>x;
      cout<<hsh[x]<<endl;
     }
    
    return 0;
}