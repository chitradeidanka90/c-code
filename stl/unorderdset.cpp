// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(auto ele:s){
        cout<<ele<<endl;
    }
}

int main() {
 unordered_set<string > s;
 int n;
 cin>>n;
for(int i=0;i<n;i++){
   string str;
   cin>>str;
   s.insert(str);  
 }
 int q;
 cin>>q;
 while(q--){
     string str;
     cin>>str;
     if(s.find(str) != s.end())
      cout<<"value exist"<<endl;
      else
       cout<<"no value"<<endl;
 }
    return 0;
}