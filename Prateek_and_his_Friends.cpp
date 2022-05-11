#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long int N;
		long int X;
		cin >> N >> X;
		long int a[N];
		for(int i = 0; i < N; i++){
			cin >> a[i];
		}
		long sum = 0, start = 0, P = 0;
		for(int i = 0; i < N; i++){
			sum += a[i];
			while(sum > X){
				sum = sum - a[start];
				start++;
			}
			if(sum == X){
				P = 1;
				break;
			}
		}
		if(P == 1){
			cout << "YES" << "\n";
		}else{
			cout << "NO" << "\n";
		}
	}
	return 0;
}