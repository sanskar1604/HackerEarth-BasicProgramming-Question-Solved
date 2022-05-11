#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0; i<n; i++){
            cin>>A[i];
        }
        int c = 0;
        for(int i = 0; i<n-1; i++){
            for(int j = i; j<n; j++){    
	            if(A[i]!=A[j]&&(A[i]+A[j])%2==0){
                	c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}