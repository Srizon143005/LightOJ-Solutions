#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i;
    double ab, bc, ca, ratio, ans;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> ab >> bc >> ca >> ratio;
        ans=sqrt(1.0/(1.0/ratio+1))*ab;
        printf("Case %lld: %.9lf\n", i, ans);
    }
    return 0;
}
