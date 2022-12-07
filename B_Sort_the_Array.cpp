#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
#define INF 1e18
#define mod (int)(1e9 + 7)
typedef long long int ll;
typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[b[i]] = i;
    }
    // get index for every value in `B`.
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if ()
    }
}