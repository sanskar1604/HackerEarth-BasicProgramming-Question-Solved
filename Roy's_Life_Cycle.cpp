#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string today, past;
	int long_today = 0, long_past = 0;
	while(n--){
		cin >> today;
		for(int i = 0; i < today.length(); i++){
            int count = 0;
            while(today[i] == 'C' && i < today.length())
                ++count, ++i;
            long_today = max(long_today, count);
        }
		past += today;
	}
	for(int i = 0; i < past.length(); i++){
        int count = 0;
        while(past[i] == 'C' && i < past.length())
            ++count, ++i;
        long_past = max(long_past, count);
    }
    cout << long_today << " " << long_past;
}