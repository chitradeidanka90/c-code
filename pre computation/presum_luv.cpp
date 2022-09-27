// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int N=1e7+10;
int arr[N]; 
int main() {
    cout<<"enter array elements : "<<" ";
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
         cin>>arr[i];
     }
     cout<<"enter testcases : "<<endl;
     int q;
     cin>>q;
     while(q--){
         int l,r;
         cin>>l>>r;
         long long sum=0;
         for(int i=l;i<=r;i++)
           sum += arr[i];
        cout<<sum<<endl;
     }
    
    return 0;
}