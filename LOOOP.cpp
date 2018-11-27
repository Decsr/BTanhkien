#include<bits/stdc++.h>
using namespace std;
const long long N=1e9+7;
long long n,i,s=0;;
long long a[10001];


int main()
{
    scanf("%lld",&n);
    for ( i=1; i<=n; i++ )
        scanf("%lld",&a[i]);
    for ( i=1; i<=n-2; i++ )
        for ( long long j=i+1; j<=n-1; j++ )
            for ( long long t=j+1; t<=n; t++ )
            {
                if ( a[i] < 0 )
                    a[i] += N;
                if ( a[j] < 0 )
                    a[j] += N;
                if ( a[t] < 0 )
                    a[t] += N;
                s += ( ( a[i] * a[j] ) % N * a[t] );
                s %= N;
            }
    printf("%lld",s);
}
