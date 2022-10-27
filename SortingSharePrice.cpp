// Sorting Share Prices

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int m){
 int sum = 0;
 bool flag = false;
 for(int i = 0; i < n-1; i++){
  if(arr[i] <= arr[i+1]){
   flag = true;
  } else{
   flag = false;
   sum += arr[i];
  }
 }
 if(flag && sum <= m){
  cout << 1 << endl;
  return;
 }
 
 sum = 0;
 for(int i = 0; i < n-1; i++){
  if(arr[i] > arr[i+1]){
   continue;
  } else{
   if(sum <= m){
    sum += arr[i];
    // cout << sum << endl;
   }
  }
 }
 // cout << sum << " " << m << endl;
 if(sum > m){
  cout << 0 << endl;
  return; 
 } 
 else{
  cout << 1 << endl;
  return; 
 } 
}
 

int main(){
 int n, m;
 cin >> n >> m;
 int arr[n+4];
 for(int i = 0; i < n; i++){
  cin >> arr[i];
 }
 solve(arr, n, m);
}


