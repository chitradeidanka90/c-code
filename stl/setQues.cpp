// Online C++ compiler to run C++ program online
//find unique elements in string
#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(auto ele:s){
        cout<<ele<<endl;
    }
}

int main() {
 set<string > s;
 int n;
 cin>>n;

 for(int i=0;i<n;i++){
   string str;
   cin>>str;
   s.insert(str);  
 }
 print(s);
    return 0;
}