#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i;
    double n, m, k, p;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> m >> k >> p;
        printf("Case %lld: %.7lf\n", i, n*k*p);
    }
    return 0;
}
