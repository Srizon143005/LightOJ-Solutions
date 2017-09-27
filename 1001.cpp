#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n , a, b, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        a=0;
        b=n;
        if(n>10)
            a=10, b=n-10;
        printf("%lld %lld\n", a, b);
    }
    return 0;
}
