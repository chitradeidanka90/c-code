// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int getbit(int n,int pos){
    return (n & (1<<pos)) !=0;
}

int setbit(int n,int pos){
    return (n | (1<<pos));
}

int unsetbit(int n,int pos){
    int mask = ~(1<<pos);
    return n & mask;
}

int updatebit(int n,int pos, int  value){
    int mask = ~(1<<pos);
    n= n & mask;
    return (n | (value<<pos));

}

int main() {
   cout<< getbit(5,1)<<endl;
   cout<<setbit(5,1)<<endl;
   cout<<unsetbit(5,0)<<endl;
   cout<<updatebit(5,1,1)<<endl;
    return 0;
}