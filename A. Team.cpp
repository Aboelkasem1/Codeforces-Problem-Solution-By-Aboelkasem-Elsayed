#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ld                  long double
#define ull                 unsigned long long
#define PI                  3.1415926535897932384626
#define vi                  vector<int>
#define vc                  vector<char>
#define vs                  vector<string>
#define vll                 vector<long long>
#define vb                  vector<bool>
#define vvi                 vector<vector<int> >
#define pb                  push_back
#define pf                  push_front
#define ppb                 pop_back
#define ppf                 pop_front
#define eb                  emplace_back
#define mp(a, b)            make_pair(a, b)
#define pii                 pair<int, int>
#define vpii                vector<pair<int, int> >
#define mk(arr, n, type)    type *arr = new type[n];
#define FOR(i, a, b)        for (int(i) = (a); (i) <= (b); ++(i))
#define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a)        for (auto& (i) : (a))
#define printall(a)         for (auto& (i) : (a)) cout << i << ' '
#define in(a)               for (auto& (i) : (a)) cin >> i
#define icin(x)             int x; cin >> x
#define print(a)            cout << a << '\n'
#define rsort(a)            sort((a).rbegin(), (a).rend())
#define w(x)                int x; cin >> x; while(x--)
#define all(c)              (c).begin(), (c).end()
#define sz(c)               (int)(c).size()
#define pqmx                priority_queue<int>
#define pqmn                priority_queue<int, vector<int>, greater<int> >
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())
#define lwr_b(c, a)         lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a)         upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define FIO                 ios::sync_with_stdio(false); cin.tie(nullptr);

void iofile();
void solve();

int main()
{
    iofile();

    // w(t)
    // {
    //     solve();
    // }

    solve();
}

void iofile()
{
    FIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
}

void solve()
{
    int q; cin >> q;
    int s[4]= {};

    int sum = 0;
    
    for (int i = 0; i < q; ++i) {
       for (int i = 1; i < 4; i++)
       {
            cin >> s[i];

            s[i] += s[i-1];
       }


        if (s[3] >= 2)
        {
            sum++;
        }
        
       
    }

    cout << sum;
}