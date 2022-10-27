//Banker and Stockes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
 ll n;
 cin >> n;
 if(n == 1){
  cout << "SELL" << endl;
 }
 else if(n == 2){
  cout << "PASS" << endl;
 }
 else if(n % 2 == 0){
  cout << "BUY" << endl;
 } else{
  cout << "SELL" << endl;
 }
}

int main(){ 
 solve();
}


