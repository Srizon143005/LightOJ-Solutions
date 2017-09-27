#include <bits/stdc++.h>
#define ll long long int
#define pi acos(-1.0)
using namespace std;

int main()
{
    ll t, i;
    double r1, r2, h, p, x, ans, v;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> r1 >> r2 >> h >> p;
        x=h*r2/(r1-r2);
        ans=(r1-r2)/h*(p+x);
        v=1.0/3*pi*ans*ans*(p+x)-1.0/3*pi*r2*r2*x;
        printf("Case %lld: %.8lf\n", i, v);
    }
    return 0;
}
