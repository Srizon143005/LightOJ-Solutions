#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll srizon(ll a, ll i)
{
    ll x;
    x=(10*a)/9;
    x--;
    printf("Case %llu:", i);
    if(x-x/10==a)
        printf(" %llu", x);
    x++;
    if(x-x/10==a)
        printf(" %llu", x);
    x++;
    if(x-x/10==a)
        printf(" %llu", x);
    printf("\n");
}

int main()
{
    ll t, i, n;
    scanf("%llu", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%llu", &n);
        srizon(n, i);
    }
    return 0;
}
