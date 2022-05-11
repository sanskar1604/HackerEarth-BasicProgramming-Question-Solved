#include <bits/stdc++.h>
using namespace std;
int main()
{
int t, n, i, j, hor, ver;
cin >> t;
while (t--)
{
hor = 0;
ver = 0;
cin >> n;
char m[n][n];
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
cin >> m[i][j];
}
for (i = 0; i < n / 2; i++)
{
for (j = 0; j < n; j++)
{
if (m[i][j] != m[n - 1 - i][j]) 
{
hor = -1;
}
}
if(hor==-1)
break;
}
for (i = 0; i < n/2; i++) 
{
for (j = 0; j < n; j++)
{
if (m[j][i]!=m[j][n-i-1])
{
ver = -1;
}
}
if(ver == -1)
break;
}
if(hor==0 && ver==0)
cout << "BOTH\n";
else if(hor==-1 && ver == 0)
cout << "VERTICAL\n";
else if(hor==0 && ver == -1)
cout << "HORIZONTAL\n";
else
cout << "NO\n";
}
return 0;
}