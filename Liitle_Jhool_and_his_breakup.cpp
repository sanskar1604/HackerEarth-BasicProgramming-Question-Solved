#include <iostream>
 
 
 
 
using namespace std;
 
 
 
 
int main()
 
{
 
string s1,s2;
 
int k=0,cnt=0;
 
cin>>s2;
 
s1="love";
 
for(int i=0;i<4;i++)
 
{
 
for(int j=k;j<s2.size();j++)
 
{
 
if(s1[i]==s2[j]) {cnt++;
 
k=j+1;
 
break;
 
}
 
}
 
}
 
if(cnt==s1.size()) cout<<"I love you, too!";
 
else cout<<"Let us breakup!";
 
}