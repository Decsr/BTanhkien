#include<bits/stdc++.h>
using namespace std;
char a[10001];
int i,t,res1,x,j;
int main()
{
    cin >> t;
    for ( int k=1; k<=t; k++ )
    {
        scanf("%s",a);
        int n = strlen(a) - 1;
        if ( a[0] == ')' )
        {
            cout << "NO\n";
            continue;
        }
        res1 = 0;
        for ( i=0; i<=n; i++ )
        {
            for ( j=i; a[j]=='(' && j<=n; j++ )
                res1++;
            i = j;
            for ( j=i; a[j]==')' && j<=n; j++ )
                res1--;
            i = j - 1;
            x = 0;
            if ( res1 < 0 )
            {
                x = 1;
                cout << "NO\n";
                break;
            }
        }
        if ( res1 > 0 )
            cout << "NO\n";
        else
            if ( x == 0 )
                cout << "YES\n";
    }
}
