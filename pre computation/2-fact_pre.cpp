// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
//time complexity O(N)+O(T);
int main() {
   fact[0]=fact[1]=1;
   for(int i=2;i<=N;i++){
       fact[i]=fact[i-1]*i;
   }
    int t;
    cin>>t;
   while(t--){
      int n;
      cin>>n;
     cout<<fact[n]<<endl; 
   }
   
    return 0;
}