#include<bits/stdc++.h>
using namespace std;
long long n,i,a[10001];


int SUB()
{
    i = 2;
    while ( a[i] < n )
    {
        i++;
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    printf("%lld\n",a[i]);
}

int main()
{
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    while ( scanf("%lld",&n) != EOF ) SUB();
}
