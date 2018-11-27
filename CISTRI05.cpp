#include<bits/stdc++.h>
using namespace std;
char c,a[1000001];
int i;


int main()
{
    scanf("%c %s",&c,a);
    int n = strlen(a) - 1;
    for ( i=0; i<=n; i++ )
        if ( a[i] != c ) printf("%c",a[i]);
}
