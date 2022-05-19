#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numDays;
        cin >> numDays;
        ll maxWalk[numDays], sum = 0;
        for(ll i = 0; i < numDays; i++){
            cin >> maxWalk[i];
            sum += maxWalk[i];
        }
        ll milestone;
        cin >> milestone;
        ll i;
        if(milestone > sum && milestone % sum != 0)
            milestone %= sum;
        else if(milestone % sum == 0){
            milestone = sum;
        }
        for(i = 0; 1; i=((i+1) % numDays)){
            milestone -= maxWalk[i];
            if(milestone <= 0)
                break;
        }
        cout << i+1 << endl;
    
    }
}