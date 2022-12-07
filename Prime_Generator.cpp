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
const int lm = 1000000000;
vector<char> segmentedSieve(long long L, long long R)
{
    ll lim = sqrt(R);
    vector<int> p;
    vector<char> mark(lim + 1, false);

    for (int i = 2; i <= lim;i++){
        if(!mark[i]){
            p.emplace_back(i);

            for (int j = i * i; j <= lim; j+=i){
                mark[j] = true;
            }
        }
    }

    vector<char> isPrime(R - L + 1, true);

    for(ll i : p){
        for (ll j = (i * i, (L + i - 1) / (i * i)); j <= R; j+=i){
            isPrime[j - L] = false;
        }
    }
    if(L == 1)
        isPrime[0] = false;
    return isPrime;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        vector<char> s = segmentedSieve(a, b);

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i])
                cout << i + a << "\n";
        }

        cout << "\n";
    }
}