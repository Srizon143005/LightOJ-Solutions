#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fun(ll n)
{
    if(n==1 || n==0)
        return 0;
    return n-1-(n-1)/3;
}

int main()
{
    ll t, a, b, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b;
        printf("Case %lld: %lld\n", i, fun(b)-fun(a-1));
    }
    return 0;
}
