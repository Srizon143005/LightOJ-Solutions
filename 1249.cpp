#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct student
{
    char name[25];
    int sum;
}s[101];

bool cmp(student x, student y)
{
    return x.sum<y.sum;
}

int main()
{
    ll t, i, n, a, b, c, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        for(j=1; j<=n; j++)
        {
            cin >> s[j].name >> a >> b >> c;
            s[j].sum=a*b*c;
        }
        sort(s+1, s+n+1, cmp);
        printf("Case %lld: ", i);
        if(s[1].sum==s[n].sum)
            printf("no thief\n");
        else
            printf("%s took chocolate from %s\n", s[n].name, s[1].name);
    }
    return 0;
}
