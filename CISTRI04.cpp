#include<bits/stdc++.h>
using namespace std;
char a[1000001],b[1000001],f[2000001];
int n,i,j,m;


void sub()
{
    n = strlen(a) - 1;
    m = strlen(b);
    for ( i=0; i<=n; i++ )
        f[i] = a[i];
    j=0;
    for ( i=n+1; i<=n+m; i++ && j++ )
        f[i] = b[j];
    for ( i=0; i<=(n+m)/2; i++ )
        if ( f[i] != f[n+m-i] )
        {
            cout << "NO" << "\n";
            return;
        }
    cout << "YES" << "\n";
}


int main()
{
    while ( scanf("%s %s",a,b) != EOF ) sub();
}
