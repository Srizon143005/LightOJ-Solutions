#include <bits/stdc++.h>
#define ll long long int
#define pi acos(-1.0)
using namespace std;

int main()
{
    ll t, i;
    double n;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        printf("Case %lld: %.2lf\n", i, 4*n*n-n*n*pi);
    }
    return 0;
}
