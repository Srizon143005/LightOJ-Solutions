#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, a, b, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b;
        printf("Case %lld: %lld\n", i, (a*b)/2);
    }
    return 0;
}
