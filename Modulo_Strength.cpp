#include<iostream>
#define ll long long
using namespace std;
ll h[1000000];
int main() {
    ll N, K;
    cin >> N >> K;
    ll a[N];
    for(ll i = 0; i < N; i++) {
        cin >> a[i];
        h[a[i] % K]++;
    }
    ll sum = 0;
    for(ll i = 0; i < K; i++){
        sum += (h[i] * (h[i] - 1));
    }
    cout << sum;
    return 0;
}