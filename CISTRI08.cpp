#include<bits/stdc++.h>
using namespace std;
int m,n,i,j;
char s[100001],s1[100001];
char f[1000][1000],f1[1000][1000];
int main()
{
    cin >> m >> n;
    scanf("%s",s);
    int leng = strlen(s) - 1;
    j = 0;
    for ( i=leng; i>=0; i-- )
    {
        s1[j] = s[i];
        j++;
    }
    for ( i=1; i<=m; i++ )
        for ( j=1; j<=n; j++ )
        {
            cin >> f[i][j];
            f1[i][j] = '.';
        }
    for ( i=1; i<=m; i++ )
        for ( j=1; j<=n; j++ )
        {
            int res = j;
            int x;
            for ( x=0; x<=leng; x++ )
                if ( f[i][res] == s[x] )
                    res++;
                else break;
            if ( x > leng )
            {
                for ( int y=j; y<=res-1; y++ )
                    f1[i][y] = f[i][y];
            }
            res = j;
            for ( x=0; x<=leng; x++ )
                if ( f[i][res] == s1[x] )
                    res++;
                else break;
            if ( x > leng )
            {
                for ( int y=j; y<=res-1; y++ )
                    f1[i][y] = f[i][y];
            }
            int rest = i;
            for ( x=0; x<=leng; x++ )
                if ( f[rest][j] == s[x] )
                    rest++;
                else break;
            if ( x > leng )
            {
                for ( int y=i; y<=rest-1; y++ )
                    f1[y][j] = f[y][j];
            }
            rest = i;
            for ( x=0; x<=leng; x++ )
                if ( f[rest][j] == s1[x] )
                    rest++;
                else break;
            if ( x > leng )
            {
                for ( int y=i; y<=rest-1; y++ )
                    f1[y][j] = f[y][j];
            }
        }
    for ( i=1; i<=m; i++ )
    {
        for ( j=1; j<=n; j++ )
            cout << f1[i][j];
        cout << "\n";
    }
}
