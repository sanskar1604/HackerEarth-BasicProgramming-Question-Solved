#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int date, year;
		string month;
		cin >> date >> month >> year;
		if(date == 1){
			if(month == "January"){
				cout << 31 << " " << "December" << " " << year - 1 << "\n";
				continue;
			}
			else if(month == "February"){
				cout << 31 << " " << "January" << " " << year << "\n";
				continue;
			}
			else if(month == "March"){
				if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
					cout << 29 << " " << "February" << " " << year << "\n";
				}else{
					cout << 28 << " " << "February" << " " << year << "\n";
				}
				continue;
			}
			else if(month == "April"){
				cout << 31 << " " << "March" << " " << year << "\n";
				continue;
			}
			else if(month == "May"){
				cout << 30 << " " << "April" << " " << year << "\n";
				continue;
			}
			else if(month == "June"){
				cout << 31 << " " << "May" << " " << year << "\n";
				continue;
			}
			else if(month == "July"){
				cout << 30 << " " << "June" << " " << year << "\n";
				continue;
			}
			else if(month == "August"){
				cout << 31 << " " << "July" << " " << year << "\n";
				continue;
			}
			else if(month == "September"){
				cout << 31 << " " << "August" << " " << year << "\n";
				continue;
			}
			else if(month == "October"){
				cout << 30 << " " << "September" << " " << year << "\n";
				continue;
			}
			else if(month == "November"){
				cout << 31 << " " << "October" << " " << year << "\n";
				continue;
			}
			else if(month == "December"){
				cout << 30 << " " << "November" << " " << year << "\n";
				continue;
			}
		}else{
			cout << date - 1 << " " << month << " " << year << "\n";
		}
	}
	return 0;
}