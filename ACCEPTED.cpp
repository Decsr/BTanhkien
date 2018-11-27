#include<bits/stdc++.h>
using namespace std;
int n,i,a[100];


int main()
{
    scanf("%d",&n);
    for ( i=1; i<=n; i++ )
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for ( i=2; i<=n; i++ )
        a[i] = a[i] + a[i-1];
    printf("%d",a[n]-2*a[n/2]);
}
