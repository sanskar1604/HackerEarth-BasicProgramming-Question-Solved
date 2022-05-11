#include<bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
int t; cin>>t;
 
while(t--)
 
{
 
int n; cin>>n;
 
int old[50005]={0},cold[50005]={0};
 
for(int i=1;i<=n;i++)
 
{
 
int temp; cin>>temp;
 
old[i]=old[i-1];cold[i]=cold[i-1];
 
if(temp&1)
 
{
 
if(temp==1)
 
old[i]++;
 
else
 
cold[i]++;
 
}
 
else old[i]++;
 
}
 
int q; cin>>q;
 
while(q--)
 
{
 
int l,r; cin>>l>>r;
 
int o=old[r]-old[l-1],c=cold[r]-cold[l-1];
 
int tot=o-c;
 
if(tot<0){
 
tot=-tot;
 
cout<<(tot+1)/2<<"\n";
 
}
 
else cout<<"0\n";
 
}
 
}
 
return 0;
 
}