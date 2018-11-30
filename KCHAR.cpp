#include<bits/stdc++.h>
using namespace std;
int n,i,k,dem;
char a[10000001],res;
int main()
{
    cin >> n >> k;
    for ( i=0; i<=n-1; i++ )
        cin >> a[i];
    for ( i=0; i<=n-1; i++ )
    {
        dem = 1;
        int j = i;
        res = a[i];
        while ( a[j] == a[j+1] && dem < k )
        {
            dem++;
            j++;
        }
        if ( dem == k )
        {
            cout << i << "\n";
            for ( int j=1; j<=k; j++ )
                cout << res;
            exit(0);
        }
    }
    cout << "-1";
}
