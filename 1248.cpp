#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, i, j;
    double a;
    cin  >> t;
    for(i=1; i<=t; i++)
    {
        a=1.0;
        cin >> n;
        for(j=1; j<n; j++)
            a=a+(double)n/(n-j);
        printf("Case %lld: %.12lf\n", i, a);
    }
    return 0;
}
