//Machine Learning Model Manager Program

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(vector<int>& arr, int cutt_off, int n){
 
 int cnt = 0, sum = arr[0];
 int i = 0, j = 0;
 
 while(i < n && j < n){
  if(sum < cutt_off){
   j++;
   if(j >= i){
    cnt += j - i;
   }
   if(j < n){
    sum += arr[j];
   }
  } else{
   sum -= arr[i];
   i++; 
  }
 }
 cout << cnt << endl;
}

int main(){
 int x, n;
 cin >> x >> n;
 vector<int> arr(n);
 for(int i = 0; i < n; i++){
  cin >> arr[i];
 }
 solve(arr, x, n);
}


