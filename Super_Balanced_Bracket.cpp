#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int test;
	cin >> test;
	while(test--){
		string st;
		cin >> st;
		int n = st.length();
		int count = 0;
		for(int i = 0; i < n/2; i++){
			if(st[i] == '('){
				count++;
			}
		}
		cout << count * 2 << "\n";
	}
	return 0;
}
 