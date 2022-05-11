#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void test(){
	int t;
	cin>>t;
	while(t--){
		int k,m,count=0,sum=0;
		cin>>k>>m;
		int a[m];
		for(int i=0;i<m;i++){
		cin>>a[i];
		}
		sort(a,a+m);
		for(int i=0;i<m;i++){
			sum+=a[i];
			if(sum<=k){
				count++;
			}
			else{
				break;
			}
		}
		cout<<count<<"\n";
	}
}
 
int main() {
 
test();
 
}