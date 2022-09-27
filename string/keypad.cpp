// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string keypad(string s,string arr[]){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            ans=ans+'0';
        }else{
            int pos = s[i]-'A';
            ans=ans+arr[pos];
        }
    }
    return ans;
}

int main() {
    string s;
    cin>>s;
    string arr[]={"2","22","222",
                   "3","33","333",
                   "4","44","444",
                   "5","55","555",
                   "6","66","666",
                   "7","77","777",
                   "8","88","888",
                   "9","99","999","9999" };
    string output=keypad(s,arr);
    cout<<output<<endl;
    return 0;
}