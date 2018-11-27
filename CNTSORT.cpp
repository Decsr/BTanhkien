#include<bits/stdc++.h>
using namespace std;
int n,a[1000001],i;
int main()
{
    scanf("%d",&n);
    for ( i=1; i<=n; i++ )
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for ( i=1; i<=n; i++ )
        printf("%d ",a[i]);
}
