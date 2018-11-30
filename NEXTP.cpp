#include<bits/stdc++.h>
using namespace std;
int n,i,j,dem,res = 1,P = -1,Q = -1;
char a[1000001];
int daonguoc(char s[],int m,int n)
{
    int h = ( m + n ) / 2,res = 0;
    for ( int k=m; k<=h; k++ )
    {
        swap(s[k],s[n-res]);
        res++;
    }
}
int main()
{
    scanf("%s",a);
    n = strlen(a) - 1;
    for ( i=0; i<=n-1; i++ )
        if ( a[i] >= a[i+1] )
            res++;
    if ( res == n + 1 )
    {
        cout << "Error!";
        exit(0);
    }
    i = n;
    while ( a[i] <= a[i-1] && i >= 1 )
        i--;
    P = i;
//    if ( P != n )
    cout << P << "\n";
    for ( i=n; i>=0; i-- )
        if ( a[i] > a[P-1] )
        {
            Q = i;
            break;
        }
    if ( Q != -1 )
    {
        cout << Q << "\n";
        swap(a[P-1],a[Q]);
        printf("%s\n",a);
    }
    daonguoc(a,P,Q);
    printf("%s",a);
}
