// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int M=1e9+7;
// time complexity O(T*n);
int main() {
   int t;
   cin>>t;
   while(t--){
      int n;
     cin>>n;
    long long fact=1;
   for(int i=2;i<=n;i++){
         fact=(fact*i)%M;
   }
  cout<<fact<<endl; 
   }
   
    return 0;
}