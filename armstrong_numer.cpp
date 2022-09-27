// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    cout<<"enter the number:"<<" ";
  int n;
  cin>>n;
  int arm=0;
  int num=n;
  while( n!=0){
     arm=arm+pow(n%10,3);
      n=n/10;
  }
if(arm==num){
    cout<<"number is armstrong"<<endl;
}else{
    cout<<"number is not armstronge"<<endl;
}
}