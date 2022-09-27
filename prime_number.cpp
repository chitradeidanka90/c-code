// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    cout<<"enter the number:"<<" ";
  int n;
  cin>>n;
  int flag=0;
  for(int i=2 ;i <sqrt(n) ;i++){
      if(n%i==0){
          flag=1;
          cout<<"number is not prime"<<endl;
          break;
      }
  }
  
  if(flag==0)
   cout<<"number is prime"<<endl;

    return 0;
}