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
    vector<int> Factor(n + 1, 0);

    for (int i = 2; i <= n; i++){
        if(Factor[i] == 0)
            for (int j = i + i; j <= n; j += i){
                Factor[j]++;
            }
    }
    int count = 0;
    for (int i = 0; i <= n; i++){
        if(Factor[i] == 2){
            count++;
        }
    }

    cout << count << endl;
}