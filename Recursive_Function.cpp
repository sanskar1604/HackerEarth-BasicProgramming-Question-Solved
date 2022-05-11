#include<bits/stdc++.h>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int answer(int x, int y){
    if(x == 0)
        return (y+1) % 1000;
    if(x > 0 && y == 0)
        return answer(x-1, 1) % 1000;
    return answer(x-1, answer(x, y-1));
}
int main() {
    int a, b;
	cin >> a >> b;
    cout << setw(3) << setfill('0') << answer(a, b);
    return 0;   

}