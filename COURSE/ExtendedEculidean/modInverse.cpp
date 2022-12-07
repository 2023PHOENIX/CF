#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define INF 1e18
#define mod (int)(1e9 + 7)
typedef long long int ll;
typedef pair<int,int> pii;
#define F first
#define S second
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
int modInverse(int a,int m){
    vector<int> e = extendedEculidean(a, m);
    int x = e[0], gcd = e[2];

    if(gcd != 1){
        cout << "Multiplicative inverse doesn't exist\n";
        return -1;
    }
    int ans = (x % m + m) % m;
    return ans;
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int a, m;
    cin >> a >> m;
}