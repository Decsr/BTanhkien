#include<bits/stdc++.h>
using namespace std;
int n,m,i,j;
int main()
{
    cin >> m >> n;
    cin.ignore(99999,'\n');
    for ( i=0; i<=m-1; i++ )
    {
        char a[1000];
        cin.getline(a, 1000, '\n');
        for ( j=0; j<=n-1; j++ )
            if ( a[j] == '*' )
                cout << i << " " << j << "\n";
    }
}

