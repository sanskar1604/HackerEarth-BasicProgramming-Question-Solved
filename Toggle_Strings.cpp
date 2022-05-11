#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z') s[i]=toupper(s[i]);
        else if(s[i]>='A' && s[i]<= 'Z') s[i]=tolower(s[i]);
        i++;
    }
    cout<<s;
}