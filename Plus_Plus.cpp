#include <iostream>

using namespace std;

int main() {

            int i,j,n,m,sum=0,a,b,c,d,mac=-1;

            cin >>n>>m;

            int arr[n][m];

for(i=0;i<n;i++){

       for(j=0;j<m;j++) {

                cin>>arr[i][j];

 }

}

for(a=1;a<=n-2;a++)

{

           for(b=1;b<=m-2;b++)

           {

                for(c=a;c<=n-2;c++)

                {

                         for(d=1;d<=m-2;d++)

                        {

                                 if((a==c&&abs(b-d)<3)||(b==d&&abs(a-c)<3)||(c==a+1&&abs(b-d)<=1))

                                          continue;

                                 else

                                {

                                        sum=arr[a-1][b]*arr[c-1][d]+arr[a+1][b]*arr[c+1][d]+arr[a][b-1]*arr[c][d-1]+arr[a][b+1]*arr[c][d+1]+arr[a][b]*arr[c][d];

                                       if(sum>mac)

                                           mac=sum;

                                }

                       }

                }

          }

}  

cout<<mac;            

}