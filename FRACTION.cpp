#include<bits/stdc++.h>
using namespace std;
long long n,i,j,dem=1;

int ucln(long long x,long long y)
{
    long long tmp;
    while ( y > 0 )
    {
        x %= y;
        tmp = x;
        x = y;
        y = tmp;
    }
    return x;
}

bool check(int x)
{
    if ( ucln(x-n,x*n) == x-n ) return true;
    return false;
}

int main()
{
    scanf("%lld",&n);
    for ( i=n+1; i<=2*n-1; i++ )
        if ( check(i) && i < (i*n)/(i-n) )
            printf("1/%lld = 1/%lld + 1/%lld\n",n,i,(i*n)/(i-n));
}
