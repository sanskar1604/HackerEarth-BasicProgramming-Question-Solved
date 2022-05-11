#include<bits/stdc++.h>
using namespace std;
long long int xsum(long long int a,long long int b){
    long long int res = 0;
    long long int m = 1;
	long long int bit_sum;
    while(a || b){
        bit_sum = (a % 10) + (b % 10);
        bit_sum %= 10;
        res += (bit_sum * m);
        a /= 10;
        b /= 10;
        m *= 10;
    }
	return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b;
        cin >> a >> b;
        long long int x = a + b;
        cout << abs( xsum(a, b) - x) << "\n";
    }
}