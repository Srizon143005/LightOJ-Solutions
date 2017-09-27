#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    double a, b, c, d, area, x, s, ta, h;
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b >> c >> d;
        x=fabs(a-c);
        s=0.5*(x+b+d);
        ta=sqrt(s*(s-x)*(s-b)*(s-d));
        h=(ta*2.0)/x;
        area=0.5*(a+c)*h;
        printf("Case %lld: %.10lf\n", i, area);
    }
    return 0;
}
