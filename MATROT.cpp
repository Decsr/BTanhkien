#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001];
int main()
{
    scanf("%d",&n);
    for ( int i=1; i<=n; i++ )
        for ( int j=1; j<=n; j++ )
            scanf("%d",&a[i][j]);
    for ( int i=1; i<=n; i++ )
        {
            for ( int j=n; j>=1; j-- )
                printf ("%d ",a[j][i]);
            printf("\n");
        }
}
