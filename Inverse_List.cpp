#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n+1],B[n+1]={0};
        for(int i = 1; i<n+1; i++){
            cin>>A[i];
        }
        int c = 0;
        for(int i = 1; i<n+1; i++){
            int t = A[i];
            B[t] = i;
        }
        for(int i = 1; i<n+1; i++){
            if(A[i]!=B[i]){
                c++;
            }
        }
        if(c!=0){
            cout<<"not inverse"<<endl;
        }
        else{
            cout<<"inverse"<<endl;
        }
    }
    return 0;
}