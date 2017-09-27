#include <bits/stdc++.h>
#define ll long long int
using namespace std;

char s[10];

int main()
{
    ll t, i, n, ans, num;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        ans=0;
        printf("Case %lld:\n", i);
        cin >> n;
        while(n--)
        {
            scanf(" %s", s);
            if(s[0]=='d')
            {
                scanf("%lld", &num);
                ans=ans+num;
            }
            else
                printf("%lld\n", ans);
        }
    }
    return 0;
}
