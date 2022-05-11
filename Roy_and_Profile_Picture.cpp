#include <iostream>
 
using namespace std;
 
int main() {
	int length, n, height, width;
	cin >> length;
 
	cin >> n;
 
	while(n--){
		cin >> height >> width;
		if(height < length || width < length){
			cout << "UPLOAD ANOTHER" << "\n";
		}else{
			if(height == width){
				cout << "ACCEPTED" << "\n";
			}else{
				cout << "CROP IT" << "\n";
			}
		}
	}
 
}