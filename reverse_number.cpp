// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    cout<<"enter the number:"<<" ";
  int n;
  cin>>n;
  int rev=0;
  while(n !=0){
      int last=n%10;
      rev=rev*10+last;
      n=n/10;
  }
  cout<<"reverse number is:"<<rev<<endl;
}