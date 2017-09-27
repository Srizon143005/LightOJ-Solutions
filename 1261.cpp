#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, num, n, m, k, p, j, l;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> m >> k;
        vector <ll> v1(m+1);
        vector <vector<ll> > v2(n+1);
        for(j=1; j<=n; j++)
        {
            v2[j].push_back(0);
            for(l=1; l<=k; l++)
            {
                cin >> num;
                v2[j].push_back(num);
            }
        }
        cin >> p;
        for(j=1; j<=p; j++)
        {
            cin >> num;
            v1[num]=1;
        }

        bool tag=0;
        for(j=1; j<=n; j++)
        {
            ll cnt=0;
            for(l=1; l<=k; l++)
            {
                if(v2[j][l]<0 && !v1[-v2[j][l]])
                    cnt++;
                if(v2[j][l]>0 && v1[v2[j][l]])
                    cnt++;
            }
            if(cnt==0)
                tag=1;
        }
        printf("Case %lld: ", i);
        if(!tag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
