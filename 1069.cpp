#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, a, b, ans;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b;
        ans=a-b;
        if(ans<0)
            ans=ans*(-1);
        ans=ans+a;
        ans=ans*4;
        ans=ans+19;
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
