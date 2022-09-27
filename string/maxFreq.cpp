// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int freq[26];

int main() {
    string s;
    cin>>s;
   for(int i=0;i<s.size();i++){
       freq[s[i]-'a']++;
   }
   char ans='a';
   int maxF=0;
   for(int i=0;i<26;i++){
       if(freq[i]>maxF){
           maxF=freq[i];
           ans=i+'a';
       }
   } 
   cout<<ans<<" "<<maxF<<endl;
   
    return 0;
}