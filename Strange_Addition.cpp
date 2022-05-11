#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, j, reverse1 = 0, reverse2 = 0, reverse3 = 0, remainder1, remainder2, remainder3;
		cin >> n >> k;
		while(n != 0) {
    		remainder1 = n % 10;
    		reverse1 = reverse1 * 10 + remainder1;
    		n /= 10;
  		}
		while(k != 0) {
    		remainder2 = k % 10;
    		reverse2 = reverse2 * 10 + remainder2;
    		k /= 10;
  		}
		j = reverse1 + reverse2;
		while(j != 0) {
    		remainder3 = j % 10;
    		reverse3 = reverse3 * 10 + remainder3;
    		j /= 10;
  		}
		cout << reverse3 << "\n"; 
	}
}
