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


int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    const int N = (int)1e8 + 2;
    vector<int> lp(N + 1);
    vector<int> pr;

    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j)
        {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i])
            {
                break;
            }
        }
    }

    for (int i = 0; i < pr.size();i+=100){
        cout << pr[i] << endl;
    }
}