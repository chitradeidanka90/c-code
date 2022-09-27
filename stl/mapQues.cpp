// Online C++ compiler to run C++ program online
//frequncy of evety string in lexigraphycally order
#include <bits/stdc++.h>
using namespace std;

void print(map<string,int> &m){
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}




int main() {
    int n;
    cin>>n;
    string s;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
    print(m);
    return 0;
}