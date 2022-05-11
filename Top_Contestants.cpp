#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin >> n >> k;
   int a[n];
   unordered_map<int, int>m;
   for(int i = 0; i < n; i++){
      cin >> a[i];
      m.insert({a[i], i});
   }
   sort(a, a + n);
   for(int i = n-1; i >= n-k; i--){
      if(m.find(a[i]) != m.end()){
         cout<<m[a[i]]+1<<" ";
      }
   }
    return 0;
}