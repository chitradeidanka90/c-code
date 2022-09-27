// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0) return;
    cout<<n<<endl;
    fun(n-1);
}

void func(int n){
    if(n==0) return;
    func(n-1);
    cout<<n<<endl;
}

int main() {
  func(5);
  fun(5);
    return 0;
}