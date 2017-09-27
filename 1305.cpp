#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll ax, ay, bx, by, cx, cy, dx, dy, area, t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        area=ax*(by-cy)+bx*(cy-ay)+cx*(ay-by);
        if(area<0)
            area=area*(-1);
        dx=ax+cx-bx;
        dy=ay+cy-by;
        printf("Case %lld: %lld %lld %lld\n", i, dx, dy, area);
    }
    return 0;
}
