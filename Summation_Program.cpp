#include<bits/stdc++.h>
using namespace std;
long long int n, ans, t;
void solve()
{
    long long int i, j, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ans = 0;
        j = sqrt(n);
        for(i = 1; i <= j; i++)
        {
            ans += (n / i);
        }
        for(i = 1; i <= j; i++)
        {
            long long low,high;
            high = n/i;
            low = n / ( i + 1 );
            low = max(low, j);
            high = max(high, j);
            ans += i * ( high - low);
        }
        cout<<ans<<"\n";
    }
}
int main()
{
    
	solve();
    return 0;
}
