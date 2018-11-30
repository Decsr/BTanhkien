#include<bits/stdc++.h>
using namespace std;
char s[100001];
int i,j,a[100001];
int main()
{
    scanf("%s",s);
    int n = strlen(s) - 1;
    for ( i=0; i<=n; i++ )
        a[i] = i;
    for ( i=0; i<=n; i++ )
        for ( j=i; j<=n; j++ )
            if ( strcmp(s+a[i], s+a[j]) > 0 )
                swap(a[i],a[j]);
    for ( i=0; i<=n; i++ )
        printf("%s\n",s+a[i]);
}
