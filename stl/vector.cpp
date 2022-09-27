// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
         printV(v);
    }
    // copy operatio have o(n) time complexity
   cout<<"vector copy is : "<< " ";
   vector<int> v_copy=v;
   printV(v_copy);
   
    vector<int> v1(5,3);
    printV(v1);
    return 0;
}