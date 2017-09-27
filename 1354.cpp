#include<iostream>
using namespace std;

int DiToBi(int n)
{
    int mul = 1, result = 0;
    while(n > 0)
    {
        result += n % 2 * mul;
        mul *= 10;
        n /= 2;
    }
    return result;
}
int main()
{
    int T, da, db, dc, dd, ba, bb, bc, bd, cas = 0;
    char cha;
    cin >> T;
    while(T--)
    {
        cin >> da >> cha >> db >> cha >> dc >> cha >> dd;
        cin >> ba >> cha >> bb >> cha >> bc >> cha >> bd;
        if( DiToBi(da) == ba && DiToBi(db) == bb && DiToBi(dc) == bc && DiToBi(dd) == bd)
            cout << "Case " << ++cas << ": " << "Yes" << endl;
        else
            cout << "Case " << ++cas << ": " << "No" << endl;
    }
    return 0;
}
