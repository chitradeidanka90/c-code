// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
//TC O(n2);
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  int curr[n+1];
  curr[0]=0;
  for(int i=1;i<=n;i++){
      curr[i]=curr[i-1]+arr[i-1];
  }
  
  int sum=0;
  int mx=INT_MIN;
  for(int i=1;i<=n;i++){
      sum=0;
      for(int j=0;j<i;j++){
          cout<<"curr[i] : "<<curr[i]<<endl;
          cout<<"curr[j] : "<<curr[j]<<endl;
              sum = curr[i]-curr[j];
              cout<<"sum is : "<<sum<<endl;
                mx=max(mx,sum);
                cout<<"loop max is : "<<mx<<endl;
          }cout<<endl;
  }
cout<<"max sub-array sum "<<mx<<endl;
    return 0;
}