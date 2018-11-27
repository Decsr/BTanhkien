#include<bits/stdc++.h>
using namespace std;
int n,i,j,dem,res,Max=LLONG_MIN;
char f[1010][1010],a[1010];


int len(char a[])
{
    for ( j=0; a[j]!='\0'; j++ );
        return j - 1;
}


int main()
{
    scanf("%d",&n);
    for ( i=1; i<=n; i++ )
        scanf("%s",f[i]);
    for ( i=1; i<=n; i++ )
        Max = max(Max,len(f[i]));
    for ( i=0; i<=Max; i++ )
        a[i] = CHAR_MAX;
    for ( i=1; i<=n; i++ )
        a[0] = min(a[0],f[i][0]);
    for ( j=1; j<=Max; j++ )
    {
        for ( i=1; i<=n; i++ )
            if ( a[j-1] == f[i][j-1] && f[i][j] == '\0' )
            {
                dem = 0;
                for ( int k=0; k<=j; k++ )
                    if  ( a[k] == f[i][k] ) dem++;
                if ( dem == j )
                {
                    int x = len(f[i]);
                    for ( int h=0; h<=x; h++ )
                    printf("%c",f[i][h]);
                    exit(0);
                }
            }
            else
            {
                dem = 0;
                for ( int k=0; k<=j; k++ )
                        if  ( a[k] == f[i][k] ) dem++;
                if ( dem == j ) a[j] = min(a[j],f[i][j]);
            }
    }
    int x = len(a);
    for ( i=0; i<=x; i++ )
        if ( a[i] != LLONG_MAX ) cout << a[i];
}
