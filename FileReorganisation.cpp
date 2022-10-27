// File Reorganisation
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

const int C = 256;

string longestPalinSub(string& str) {
 int N = str.length();
 int hash[C] = {0};
 for(int i = 0; i < N; i++) {
  hash[str[i]]++;
 }
 string res1 = "";
 string res2 = "";
 for(int i = 0; i< C; i++) {
  for(int j = 0; j < hash[i] / 2; j++) {
   res1.push_back(i);
  }
  for(int j = (hash[i] + 1)/2; j < hash[i]; j++) {
   res2.push_back(i);
  }
 }
 reverse(res2.begin(), res2.end());
 string res3;
 bool flag = false;
 for(int i = 0; i < C; i++) {
  if(hash[i] % 2) {
   if(!flag) {
   res1.push_back(i);
   flag = true;
   }
   else {
    res3.push_back(i);
   }
  }
 }
 return (res1 + res2 + res3);
}
int len(string &res){
    int l = 0, h = res.size() - 1;
    while(res[l] != res[h]) h--;
    return h - l + 1;
}
int main() {
 string str;
    cin>>str;    
 string res = longestPalinSub(str);
    cout<< len(res) << endl;
}