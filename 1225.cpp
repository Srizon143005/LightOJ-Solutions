#include <bits/stdc++.h>
#define ll long long int
using namespace std;

char s[20], str[20];

int main()
{
    ll t, i, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        scanf(" %s", s);
        strcpy(str, s);
        for(j=0; j<strlen(s)/2; j++)
            swap(str[j], str[strlen(str)-1-j]);
        printf("Case %lld: ", i);
        if(strcmp(s, str)==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
