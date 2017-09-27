#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, x1, y1, x2, y2;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        x1=abs(x1-x2);
        y1=abs(y1-y2);
        printf("Case %lld: ", i);
        if(x1==y1)
            printf("1\n");
        else if(x1%2==y1%2)
            printf("2\n");
        else
            printf("impossible\n");
    }
    return 0;
}
