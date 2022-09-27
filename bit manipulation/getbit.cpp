// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int getbit(int n,int pos){
    return (n & (1<<pos));
}

int main() {
    int n,pos;
    cin>>n>>pos;
     int res=getbit(n,pos);
     if(res !=0)
      cout<<"this is a set bit"<<endl;
     else
      cout<<"this is unset bit"<<endl;
    return 0;
}