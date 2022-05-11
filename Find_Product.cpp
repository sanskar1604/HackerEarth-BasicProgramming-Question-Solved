#include<stdio.h>
#include<math.h>
int main()
{
    int n,A[100005],i;
    long long int answer=1; //it should not be int
    int modulo=pow(10,9)+7;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        answer=(answer*A[i])%modulo;
    }
    printf("%d\n",answer);
 
 
 
    return 0;
}