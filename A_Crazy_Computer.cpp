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

    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(int &x : v)
        cin >> x;

    int last = 0;

    for (int i = 1; i < n; i++){

        if(v[i] - v[i - 1] > c){
            last = i;
        }
    }

    cout << n - last << endl;
}