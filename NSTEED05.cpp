#include<bits/stdc++.h>
using namespace std;
int main()
{
    for ( char i='A'; i<='Z'; i++ )
        for ( char j='A'; j<='Z'; j++ )
            for ( char k='A'; k<='Z'; k++ )
                for ( char x='A'; x<='Z'; x++ )
                    for ( char y='A'; y<='Z'; y++ )
                    {
                        if ( ( i > j && j > k && k > x && x > y ) || ( i < j && j < k && k < x && x < y ) )
                            cout << i << j << k << x << y << "\n";
                    }
}
