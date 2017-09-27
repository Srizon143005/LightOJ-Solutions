#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, n;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        ll one=0;
        while(n)
        {
            if(n%2==1)
                one++;
            n=n/2;
        }
        printf("Case %lld: ", i);
        if(one%2==1)
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}
