#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i;
    double v1, v2, v3, s, tt, a1, a2;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        s=v1*v1/2/a1+v2*v2/2/a2;
        tt=max(v1/a1, v2/a2);
        printf("Case %lld: %lf %lf\n", i, s, tt*v3);
    }
    return 0;
}
