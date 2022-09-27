// Online C++ compiler to run C++ program online
//TC O(n3);
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
  int sum=0;
  int mx=INT_MIN;
  for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
          sum=0;
          for(int k=i;k<=j;k++){
              sum += arr[k];
                mx=max(mx,sum);
          }
         
      }
  }
cout<<"max subarray sum "<<mx<<endl;
    return 0;
}