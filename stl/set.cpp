// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
//use unoereded set if order does not matter.
//time compl. of unoreded set is O(1);
void print(set<string> &s){
    for(auto ele:s){
        cout<<ele<<endl;
    }
}

int main() {
 set<string > s;
 s.insert("abc");
 s.insert("def"); //log(n);
    print(s);
    
    auto it=s.find("abcs");
    if(it != s.end())
     cout<< (*it)<<endl;
     else
      cout<<"no value"<<endl;
    return 0;
}