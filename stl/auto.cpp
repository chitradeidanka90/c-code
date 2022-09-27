// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v={1,2,3,4,5};
  for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   cout<<endl;
   //range based loop
   for(int value:v)
    cout<<value<<" ";
    cout<<endl;
    
    for(int &value : v){
        value++;
      cout<<value<<" ";  
    }cout<<endl;
     
    vector<pair<int,int>> v1 ={{1,2},{3,4},{5,6}};
    // for(pair<int,int> x:v1)
    //  cout<<x.first<<" "<<x.second<<endl;
    for(auto x:v1)
     cout<<x.first<<" "<<x.second<<endl;
    return 0;
}