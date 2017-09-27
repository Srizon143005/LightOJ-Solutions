#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, m, n, num;
    string str;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        deque <ll> q;
        printf("Case %lld:\n", i);
        cin >> n >> m;
        while(m--)
        {
            cin >> str;
            if(str=="pushLeft")
            {
                cin >> num;
                if(q.size()!=n)
                {
                    q.push_back(num);
                    printf("Pushed in left: %lld\n", num);
                }
                else
                    printf("The queue is full\n");
            }
            else if(str=="pushRight")
            {
                cin >> num;
                if(q.size()!=n)
                {
                    q.push_front(num);
                    printf("Pushed in right: %lld\n", num);
                }
                else
                    printf("The queue is full\n");
            }
            else if(str=="popRight")
            {
                if(q.empty())
                    printf("The queue is empty\n");
                else
                {
                    cout << "Popped from right: " << q.front() << endl;
                    q.pop_front();
                }
            }
            else
            {
                if(q.empty())
                    printf("The queue is empty\n");
                else
                {
                    cout << "Popped from left: " << q.back() << endl;
                    q.pop_back();
                }
            }
        }
    }
    return 0;
}
