#include<bits/stdc++.h>
using namespace std;
char a[10001000];
int i;


int main()
{
    scanf("%s",a);
    int n=strlen(a)-1;
    for ( i=0; i<=n; i++ )
        if ( a[i] >= 'A' && a[i] <= 'Z' )
            printf("%c",a[i]);
        else
            if ( a[i] >= 'a' && a[i] <= 'z' )
                printf("%c",a[i] - ( 'a' - 'A' ));
        else printf("%c",a[i]);
    cout << "\n";
    for ( i=0; i<=n; i++ )
        if ( a[i] >= 'a' && a[i] <= 'z' )
            printf("%c",a[i]);
        else
            if ( a[i] >= 'A' && a[i] <= 'Z' )
                printf("%c",a[i] + ( 'a' - 'A' ));
        else printf("%c",a[i]);
    cout << "\n";
    for ( i=0; i<=n; i++ )
        if ( a[i] >= 'A' && a[i] <= 'Z' )
            printf("%c",a[i] + ( 'a' - 'A' ));
        else
            if ( a[i] >= 'a' && a[i] <= 'z' )
                printf("%c",a[i] - ( 'a' - 'A' ));
        else printf("%c",a[i]);
}

