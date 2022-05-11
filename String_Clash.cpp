#include<iostream>
 
#include<string>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s>>t;
    int ans=0;
    for(char a='a';a<='z';a++)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==a)
            {
                count++;
            }
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==a)
            {
                count++;
            }
        }
        if(count%2!=0)
            ans=ans+count-1;
        else
            ans=ans+count;
    }
    cout<<ans+1<<endl;
}