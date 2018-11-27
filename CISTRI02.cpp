#include<bits/stdc++.h>
using namespace std;
char a[1000001];
long long n,i,f[1000001];


int main()
{
    scanf("%s",a);
    for ( i=0; i<=1000001; i++ )
        f[i] = 0;
    n = strlen(a) - 1;
    cout << n + 1 << "\n";
    for ( i=0; i<=n; i++ )
        f[a[i]]++;
    sort(a,a+n+1);
    for ( i=0; i<=n; i++ )
        if ( a[i] != a[i-1] )
            printf("%c %lld\n",a[i],f[a[i]]);
}
