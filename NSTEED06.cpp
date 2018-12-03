#include<bits/stdc++.h>
using namespace std;
int a[10001],res,rest,p,q;

void dq(int i)
{
    if ( i > 6 )
    {
        if ( res != 0 || rest != 0 )
            return;
        for ( int k=1; k<=6; k++ )
            cout << a[k] << " ";
        cout << "\n";
        return;
    }
    int j;
    for ( j=0; j<=res; j++ )
        if ( j * j <= rest )
        {
            a[i] = j;
            res -= j;
            rest -= ( j * j );
            dq(i+1);
            res += j;
            rest += ( j * j );
        }
        else break;
    return;
}

int main()
{
    cin >> p >> q;
    res = p;
    rest = q;
    dq(1);
}
