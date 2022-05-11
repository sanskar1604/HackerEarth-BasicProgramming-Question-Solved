#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
string s;
cin>>s;
int dashes = 0;
for(int i = 0; i<s.size(); i++){
if(s[i]=='0'){
dashes+=6;
}
if(s[i]=='1'){
dashes+=2;
}
if(s[i]=='2'){
dashes+=5;
}
if(s[i]=='3'){
dashes+=5;
}
if(s[i]=='4'){
dashes+=4;
}
if(s[i]=='5'){
dashes+=5;
}
if(s[i]=='6'){
dashes+=6;
}
if(s[i]=='7'){
dashes+=3;
}
if(s[i]=='8'){
dashes+=7;
}
if(s[i]=='9'){
dashes+=6;
}
}
cout<<dashes<<endl;
return 0;
}


