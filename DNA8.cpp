#include <bits/stdc++.h>
using namespace std;

char b[] = "ACGT";
char a[16];

int m;
char e[1003][16];

bool ok() {
    for (int i=0; i<m; i++)
        if (strstr(a, e[i]))
        return false;
    return true;
}

int main() {
    scanf("%d", &m);
    for (int i=0; i<m; i++)
        scanf("%s", e[i]);
    for ( int i=0; a[0]=b[i]; i++ )
        for ( int i=0; a[1]=b[i]; i++ )
            for ( int i=0; a[2]=b[i]; i++ )
                for ( int i=0; a[3]=b[i]; i++ )
                    for ( int i=0; a[4]=b[i]; i++ )
                        for ( int i=0; a[5]=b[i]; i++ )
                            for ( int i=0; a[6]=b[i]; i++ )
                                for ( int i=0; a[7]=b[i]; i++ )
                                    if (ok())
                                        puts(a);
}
