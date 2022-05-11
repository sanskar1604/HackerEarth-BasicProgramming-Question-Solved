#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main()
{
ll k,n,i,j,l=0;
cin>>k;
string s[130],str[130];
 
for(i=0;i<k;i++)
{
cin>>s[i];
}
 
cin>>n;
for(i=0;i<n;i++)
{
cin>>str[i];
}
  for(j=0;j<k;j++)
{
for(i=0;i<n;i++)
{
if(s[j]==str[i])
{
str[i]="";
}
}
}
 
for(i=0;i<n;i++)
{
if(str[i]!="")
{
l++;
if(l==1)
{
cout<<(char)toupper(str[i][0]);
}
else
cout<<"."<<(char)toupper(str[i][0]);
 
}
 
}
 
return 0;
}