#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, i, ans;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        printf("Case %lld: ", i);
        if(n%2==1)
            printf("Impossible\n");
        else
        {
            ans=1;
            while(n%2==0)
            {
                ans=ans*2;
                n=n/2;
            }
            printf("%lld %lld\n", n, ans);
        }
    }
    return 0;
}
