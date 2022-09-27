// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}

int main() {
    map<int,string> m;
    m[1]="abc";
    m[2]="ffd";
    m.insert({4,"bnj"});
    m.insert(make_pair(3,"dsa"));
    auto it=m.find(3);``
    if(it==m.end())
     cout<<"NO VALUE";
     else
      cout<<it->first<<" "<<it->second<<endl;
    
    return 0;
}