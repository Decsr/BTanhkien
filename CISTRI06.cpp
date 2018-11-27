#include<bits/stdc++.h>
using namespace std;
char a[1000001],b[1000001];
int i,j,t,n,m;


int main()
{
    scanf("%s %s",a,b);
    n = strlen(b) - 1;
    m = strlen(a) - 1;
    for ( i=0; i<=n; i++ )
    {
        if ( a[0] == b[i] )
        {
            int res = i + 1;
            t = i;
            for ( j=0; j<=m; j++ )
            {
                if ( a[j] != b[t] ) break;
                t++;
            }
            if ( j - 1 == m ) cout << res << "\n";
        }
    }
}
