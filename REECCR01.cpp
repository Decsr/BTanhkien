#include<bits/stdc++.h>
using namespace std;
const long long maxn = 1e9 + 7;
long long a[10000001],i,n,x,y,p,q,l,r;
int main()
{
    cin >> x >> y >> p >> q;
    cin >> l >> r;
    a[0] = x % maxn;
    a[1] = y % maxn;
    if ( l == 0 )
        cout << a[0] << "\n" << a[1] << "\n";
    if ( l == 1 )
        cout << a[1] << "\n";
    for ( i=2; i<=r; i++ )
    {
        a[i] = p * a[i-2] + q * a[i-1];
        a[i] %= maxn;
        if ( i >= l )
            cout << a[i] << "\n";
    }
}
