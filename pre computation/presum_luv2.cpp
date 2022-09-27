// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int N=1e7+10;
int arr[N]; 
int pre[N];
// time complexity O(N);
int main() {
    cout<<"enter array elements : "<<" ";
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
         cin>>arr[i];
         pre[i]=pre[i-1]+arr[i];
     }
     cout<<"enter testcases : "<<endl;
     int q;
     cin>>q;
     while(q--){
         int l,r;
         cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<endl;
     }
    
    return 0;
}