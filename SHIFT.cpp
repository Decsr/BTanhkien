#include<bits/stdc++.h>
using namespace std;
int n,i,k;
char a;
void check(char h)
{
    for ( int j=1; j<=k; j++ )
        if ( h == 'Z' )
            h = 'A';
        else h = h + 1;
    cout << h;
    return;
}
int main()
{
    cin >> n >> k;
    k %= 26;
    for ( i=1; i<=n; i++ )
    {
        cin >> a;
            check(a);
    }
}
