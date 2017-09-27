#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_leap_year(ll y)
{
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
                return true;
            return false;
        }
        return true;
    }
    return false;
}

ll the_month(string a)
{
    if(a=="January")
        return 1;
    else if(a=="February")
        return 2;
    else if(a=="March")
        return 3;
    else if(a=="April")
        return 4;
    else if(a=="May")
        return 5;
    else if(a=="June")
        return 6;
    else if(a=="July")
        return 7;
    else if(a=="August")
        return 8;
    else if(a=="September")
        return 9;
    else if(a=="October")
        return 10;
    else if(a=="November")
        return 11;
    else if(a=="December")
        return 12;
    else
        return 0;
}

int main()
{
    string str1, str2;
    ll date1, date2, year1, year2, month1, month2, ans, j, t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> str1;
        cin >> date1;
        getchar();
        cin >> year1;
        cin >> str2;
        cin >> date2;
        getchar();
        cin >> year2;
        month1=the_month(str1);
        month2=the_month(str2);
        ans=(year2-year1)/400*97;
        year1=year1%400+400;
        year2=year2%400+400;
        if(year1>year2)
            year2=year2+400;
        for(j=year1; j<=year2; j++)
        {
            if(is_leap_year(j))
                ans++;
        }
        if(is_leap_year(year1) && month1>=3)
            ans--;
        if(is_leap_year(year2))
        {
            if(month2==1)
                ans--;
            if(month2==2 && date2<=28)
                ans--;
        }
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
