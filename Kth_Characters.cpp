#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	char c;
	for(int i = 0; i < s.length() - 1; i++){
		if(s[i] > s[i + 1]){
			c = s[i];
			break;
		}
	}
	for(int i = 0; i < s.length(); i++){
		if(s[i] != c)
		cout << s[i];
	}
}