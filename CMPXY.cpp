#include<bits/stdc++.h>
using namespace std;
char a[100001];
int i,j,Q;
int main()
{
    scanf("%s",a);
    int n = strlen(a) - 1;
    cin >> Q;
    for ( int k=1; k<=Q; k++ )
    {
        int x,y;
        cin >> x >> y;
        int res = 0,dem = 0;
        while ( a[x+res] == a[y+res] && x + res <=n && y + res <=n )
        {
            res++;
            dem++;
        }
        cout << dem << "\n";
    }
}
