#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, ii, aa[100], bb[100];
    char a[200], b[200];
    cin >> t;
    for(ii=1; ii<=t; ii++)
    {
        for(i=0; i<100; i++)
            aa[i]=bb[i]=0;
        scanf(" %[^\n]s", a);
        scanf(" %[^\n]s", b);
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]==' ')
                continue;
            else
                aa[tolower(a[i])-'a']++;
            //cout << tolower(a[i])-'a' << endl;
        }
        for(i=0; i<strlen(b); i++)
        {
            if(b[i]==' ')
                continue;
            else
                bb[tolower(b[i])-'a']++;
        }
        ll flag=1;
        for(i=0; i<30; i++)
        {
            if(aa[i]!=bb[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            printf("Case %lld: No\n", ii);
        else
            printf("Case %lld: Yes\n", ii);
    }
    return 0;
}
