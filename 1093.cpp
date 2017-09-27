#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll diff, t, i, n, a[100005], ms, j;
    deque <ll> big, small;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        cin >> ms;
        for(j=0; j<n; j++)
            cin >> a[j];
        big.clear();
        small.clear();
        big.push_back(0);
        small.push_back(0);
        diff=0;
        for(j=1; j<n; j++)
        {
            while(!big.empty() && a[big.back()]<=a[j])
                big.pop_back();
            big.push_back(j);
            while(j-big.front()>=ms)
                big.pop_front();
            while(!small.empty() && a[small.back()]>=a[j])
                small.pop_back();
            small.push_back(j);
            while(j-small.front()>=ms)
                small.pop_front();
            diff=max(diff, a[big.front()]-a[small.front()]);
        }
        printf("Case %lld: %lld\n", i, diff);
    }
    return 0;
}
