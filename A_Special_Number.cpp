#include<bits/stdc++.h>
 
using namespace std;
 
int sum_of_digit(int n)
 
{
 
    int sum=0;
 
    while(n>0)
 
    {
 
        sum+=(n%10);
 
        n=n/10;
 
    }
 
    return sum;
 
}
 
int main()
 
{
 
    int t;
 
    cin>>t;
 
 
 
 
    while(t--)
 
    {
 
        int a;
 
        cin>>a;
 
 
 
 
        while(sum_of_digit(a)%4!=0)
 
        {
 
            a++;
 
        }
 
 
 
 
        cout<<a<<endl;
 
    }
 
}