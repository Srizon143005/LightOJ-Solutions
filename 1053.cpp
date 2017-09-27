#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, a[4], j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        for(j=1; j<=3; j++)
            cin >> a[j];
        sort(a+1, a+4);
        printf("Case %lld: ", i);
        if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3])
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
