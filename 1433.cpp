#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i;
    double Ox, Oy, Ax, Ay, Bx, By, A, B, C, c, arc;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&Ox,&Oy, &Ax, &Ay, &Bx, &By);
        A=sqrt(((Ox-Ax)*(Ox-Ax))+((Oy-Ay)*(Oy-Ay)));
        C=sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
        c=acos((2*A*A-C*C)/(2*A*A));
        arc=c*A;
        printf("Case %lld: %lf\n", i, arc);
    }
    return 0;
}
