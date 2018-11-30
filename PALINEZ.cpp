#include<bits/stdc++.h>
using namespace std;
char a[10001];
int i,Max = 1,j,dem = 0;

bool check(int x, int y)
{
    for ( int h=0; h<=(y-x+1)/2; h++ )
        if ( a[x+h] != a[y-h] )
            return false;
    return true;
}

int main()
{
    scanf("%s",a);
    int n = strlen(a) - 1 ;
    for ( i=0; i<=n-1; i++ )
    {
        for ( j=n; j>=i+1; j-- )
        {
            if ( check(i,j) == true )
                Max = max(Max,j-i+1);
        }
        if ( Max >=  n - i + 1 )
            break;
    }
    cout << Max;
}
