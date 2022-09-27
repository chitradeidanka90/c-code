// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isPower(int n){
    return n && !(n & n-1);
}

int main() {
    cout<<isPower(17)<<endl;
    return 0;
}