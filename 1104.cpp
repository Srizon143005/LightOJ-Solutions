#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, j;
    double p, d;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> d;
        p=1.0;
        for(j=1; p>0.5; j++)
            p=p*(double)(d-j)/d;
        printf("Case %lld: %lld\n", i, j-1);
    }
    return 0;
}
