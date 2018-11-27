#include<bits/stdc++.h>
using namespace std;
long long n,m,i,a[100001],R[100001],L[100001];


int main()
{
    scanf("%lld %lld",&n,&m);
    a[0]=0;
    for ( i=1; i<=n; i++ )
    {
        scanf("%lld",&a[i]);
        a[i]=a[i]+a[i-1];
    }
    for ( i=1; i<=m; i++ )
        scanf("%lld %lld",&L[i],&R[i]);
    for ( i=1; i<=m; i++ )
        printf("%lld\n",a[R[i]]-a[L[i]-1]);
}
