#include<bits/stdc++.h>
using namespace std;
int main()
{
    for ( int i=1; i<=9; i++ )
        for ( int j=0; j<=9; j++)
            for ( int t=0; t<=9; t++ )
                for ( int x=0; x<=9; x++ )
                    for ( int y=0; y<=9; y++ )
                        if ( i * 10000 + j * 1000 + t * 100 + x * 10 + y == pow(i,5) + pow(j,5) + pow(t,5) + pow(x,5) + pow(y,5))
                            printf("%d%d%d%d%d\n",i,j,t,x,y);
}
