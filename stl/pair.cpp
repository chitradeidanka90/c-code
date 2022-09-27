// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    pair<int ,string> p;
    // p=make_pair(1,"chitra");
    p={1,"yash"};
    cout<<p.first<<" "<<p.second<<endl;
    
    int a[]={1,2,3};
    int b[]={4,5,6};
    pair<int,int> p_arr[3];
    p_arr[0]={1,4};
    p_arr[1]={2,5};
    p_arr[2]={3,6};
    swap(p_arr[0],p_arr[2]);
    for(int i=0;i<3;i++){
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
   
   pair<int,string> &p1=p;
   p1.second = "chitra";
   cout<<p.first<<" "<<p.second<<endl;
   
    return 0;
}