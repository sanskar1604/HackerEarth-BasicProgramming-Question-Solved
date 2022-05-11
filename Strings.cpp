#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string n,m;
    while(t--){
        cin>>n>>m;
        if(n==m){
            cout<<"YES"<<endl;
        }
        else if(n=="2"&&m=="4"){
            cout<<"YES"<<endl;
        }
        else if(n=="4"&&m=="2"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}