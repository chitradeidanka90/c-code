// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<string> valid;

void print(vector<int> &v){
   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}

int main() {
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        print(v[i]);
    }
    return 0;
}