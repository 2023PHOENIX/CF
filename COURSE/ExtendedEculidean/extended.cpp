#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
#define INF 1e18
#define mod (int)(1e9 + 7)
typedef long long int ll;
typedef pair<int, int> pii;

#define PB push_back
#define MP make_pair

vector<int> extendedEculidean(int a, int b)
{

    if (b == 0)
    {
        return {1, 0, a};
    }

    vector<int> result = extendedEculidean(b, a % b);
    int ra = result[0], rb = result[1], gcd = result[2];

    return {rb, ra - (a / b) * rb, gcd};
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    auto res = extendedEculidean(a, b);
    cout << res[0] << " " << res[1] << " " <<res[2]<< "\n";
}