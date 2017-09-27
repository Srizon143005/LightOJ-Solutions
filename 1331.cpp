#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double fun(double a, double b, double c)
{
    return acos((a*a+b*b-c*c)/(2*a*b));
}

double area(double a, double b, double c)
{
    double ans;
    ans=(a+b+c)/2;
    return sqrt(ans*(ans-a)*(ans-b)*(ans-c));
}

int main()
{
    ll t, i;
    double r1, r2, r3, a, b, c, ans;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> r1 >> r2 >> r3;
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        ans=area(a, b, c);
        ans=ans-fun(a, c, b)/2*r1*r1-fun(a, b, c)/2*r2*r2-fun(c, b, a)/2*r3*r3;
        printf("Case %lld: %.8lf\n", i, ans);
    }
    return 0;
}
