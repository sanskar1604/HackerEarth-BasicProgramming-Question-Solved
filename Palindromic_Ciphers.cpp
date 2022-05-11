#include<iostream>
using namespace std;
int main()
{
    int num;
	cin>>num;

	while(num--){
    	string s;
		cin>>s;
		unsigned long long int ans=1;
		int cnt=0;
		int len=s.size();
		for(int i=0;i<s.size();i++,len--){
			if(s[i]!=s[len-1]){
				cnt=1;
				break;
			}
		}
		if(cnt){
			for(int i=0;i<s.size();i++){
				ans*=s[i]-96;
			}
			cout<<ans<<endl;
		}else cout<<"Palindrome"<<endl;

    }
	return 0;
}