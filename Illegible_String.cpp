#include <bits/stdc++.h>
using namespace std;
string st;
int n;
int cnt,ans1,ans2;
int main(){
	cin>>n;
	cin>>st;
	for (int i=0;i<st.size();i++){ 
  		if (st[i]=='v'){
    		cnt++;
    		continue;
  		}
  		if (st[i]=='w'){
    		cnt+=2;
    		continue;
  		}
  		ans1+=cnt;
  		ans2+=cnt/2+cnt%2;
  		cnt=0;	
  		++ans1;
  		++ans2;
	}
 	ans1+=cnt;
	ans2+=cnt/2+cnt%2;
	cout<<ans2<<" "<<ans1<<endl;
	return 0;
}