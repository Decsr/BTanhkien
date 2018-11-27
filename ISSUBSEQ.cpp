#include<bits/stdc++.h>
using namespace std;
int n,i,m,j,x,a[100001],b[100001];


int input()
{
    scanf("%d",&n);
    for ( i=1; i<=n; i++ )
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for ( i=1; i<=m; i++ )
        scanf("%d",&b[i]);
}


int main()
{
    input();
    if ( n == 0 )
    {
        printf("YES\nYES");
        exit(0);
    }
    if ( m < n )
    {
        printf("NO\nNO");
        exit(0);
    }
    j = 1;
    while ( a[1] != b[j] && j <= m )
        j++;
    if ( j > m )
    {
        printf("NO\nNO");
        exit(0);
    }
    int res = j,dem = 0;
    for ( i=1; i<=n; i++ )
//    {
        for ( x=j; x<=m; x++ )
            if ( a[i] == b[x] ) { j = x + 1; dem++; break; }
//        if ( dem > n )
//        {
//            printf("NO");
//            break;
//        }
//    }
    if ( dem == n ) printf("YES");
    else printf("NO");
    printf("\n");
    j = res;
    for ( i=1; i<=n; i++ )
        if ( a[i] == b[j] ) j++;
        else { printf("NO"); exit(0); }
    printf("YES");
}
