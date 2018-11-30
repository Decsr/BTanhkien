#include<bits/stdc++.h>
using namespace std;
int n,m,i,j;
char a;
int main()
{
    cin >> m >> n;
    for ( i=0; i<=m-1; i++ )
        for ( j=0; j<=n-1; j++ )
        {
            cin >> a;
            if ( a == '*' )
                cout << i << " " << j << "\n";
        }
}
