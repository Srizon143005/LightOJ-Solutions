#include <bits/stdc++.h>
#define ll long long int
#define pi acos(-1.0)
using namespace std;

int main()
{
    ll t, i, n;
    double r, R;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> R >> n;
        r=R*sin(pi/n)/(1+sin(pi/n));
        printf("Case %lld: %lf\n", i, r);
    }
    return 0;
}
