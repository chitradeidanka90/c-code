// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    // transform(s.begin(),s.end(),s.begin() , :: toupper);
    // cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
         s[i] -= 32;
    }
    cout<<s<<endl;
    
     for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
         s[i] += 32;
    }
    cout<<s<<endl;
    
    return 0;
}