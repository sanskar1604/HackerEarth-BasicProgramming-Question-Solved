#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n/2;i++)      //considering first half elements
    {
        while(a[i]>=10)    //using this you can find first digit of a number 
        {
            a[i]=a[i]/10;
        }
 
        if(i%2==0)       //see note below
        {
           sum+=a[i];
        }
        else
        {
            sum+=(a[i]*-1);
        }
    }
    for(i=n/2;i<n;i++)     //considering next half elements
    {
        a[i]=a[i]%10;   //using this you can find the last digit of a number
 
        if(i%2==0)
        {
           sum+=a[i];
        }
        else
        {
            sum+=(a[i]*-1);
        }
    }
    if(sum==0 || abs(sum)%11==0)
    {
        cout<<"OUI";
    }
    else{
        cout<<"NON";
    }
 
}
