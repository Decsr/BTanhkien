#include<bits/stdc++.h>
using namespace std;
long long dem=0,Max,n;
long long i,j,res=0;
bool snt[1000100];
void sangnt()
{
    Max=1000100;
    for ( i=2; i<=Max; i++ )
        snt[i]=true;
    i=2;
    while ( i <= floor(sqrt(Max) ) )
        if ( snt[i] == true )
        {
//            res++;
//            a[res] = i;
            for ( j=2; j<=Max/i; j++ )
                    snt[i*j]=false;
            i++;
        }
        else i++;
}
int main()
{
    scanf("%lld",&n);
    sangnt();
    for ( i=2; i<=floor(sqrt(n)); i++ )
        if ( snt[i] == true && n % i == 0 )
        {
            dem++;
            while ( n % i == 0 )
                n /= i;
        }
//        if ( n % a[i] == 0 )
//        {
//            dem++;
//            while ( n % a[i] == 0 )
//                n /= a[i];
//        }
    if ( n != 1 ) dem++;
    printf("%lld",dem);
}

