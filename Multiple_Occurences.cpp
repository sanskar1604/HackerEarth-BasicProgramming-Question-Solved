#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back({x,i});
   }
   sort(v.begin(),v.end());
   int ans=0;
   int j=0;
   for(int i=0;i<n;i++){
 
       if(v[j].first!=v[i].first){
           ans+=v[i-1].second-v[j].second;
           j=i;
       }
   }
   ans+=v[n-1].second-v[j].second;
   cout<<ans<<endl;
}
 
int main()
 
{
 
   int t;
 
   cin>>t;
 
   while(t--){
 
       solve();
 
   }
 
   return 0;
 
}