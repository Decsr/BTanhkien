#include<bits/stdc++.h>
using namespace std;
char a[1000001];
int i;

void sub()
{
    int n = strlen(a) - 1;
    for ( i=0; i<=n/2; i++ )
        if ( a[i] != a[n-i] )
        {
            cout << "NO" << "\n";
            return;
        }
    cout << "YES" << "\n";
}


int main()
{
    while ( scanf("%s",a) != EOF ) sub();
}
