// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
   sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    
    return 0;
}