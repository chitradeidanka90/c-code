// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<string> valid;

void print(vector<pair<int,int>> v){
   for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
}

int main() {
    // vector<pair<int,int>> v ={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    print(v);
    return 0;
}