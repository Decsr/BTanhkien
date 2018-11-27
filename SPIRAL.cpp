#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,f[1001][1001],cot=1,dong=1;


int main()
{
    int x;
    scanf("%d %d",&m,&n);
    int res=n,rest=m;
    x=0;
    while (1)
    {
        for ( j=cot; j<=n; j++ )
        {
            x++;
            f[dong][j] = x;
        }
        dong++;
        if ( x >= res * rest ) break;
        for ( i=dong; i<=m; i++ )
        {
            x++;
            f[i][n] = x;
        }
        n--;
        if ( x >= res * rest ) break;
        for ( j=n; j>=cot; j-- )
        {
            x++;
            f[m][j] = x;
        }
        m--;
        if ( x >= res * rest ) break;
        for ( i=m; i>=dong; i-- )
        {
            x++;
            f[i][cot] = x;
        }
        cot++;
        if ( x >= res * rest ) break;
    }
    for ( i=1; i<=rest; i++ )
    {
        for ( j=1; j<=res; j++ )
            printf("%d ",f[i][j]);
        printf("\n");
    }
}
