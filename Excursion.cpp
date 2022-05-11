#include<bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
 
{
 
    int t;
    cin>>t;
    while(t--)
 
    {
        double n,m,k;
        cin>>n>>m>>k;
        cout<<ceil(n/k)+ceil(m/k)<<endl; 
    }
    return 0;
 
}