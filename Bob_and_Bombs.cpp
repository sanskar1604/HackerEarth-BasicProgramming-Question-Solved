#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='B'){
                if(s[i+1]!='B'){
                    s[i+1] = 0;
                }
                if(s[i+2]!='B'){
                    s[i+2] = 0;
                }
                if(s[i-1]!='B'){
                    s[i-1] = 0;
                }
                if(s[i-2]!='B'){
                    s[i-2] = 0;
                }
                count++;
            }
        }
        int wall = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='W'){
                wall++;
            }
        }
        cout<<s.size()-(count + wall)<<endl;
    }
    return 0;
}