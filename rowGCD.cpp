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

int gcd(int a,int b){

    while(b){

        a = a % b;
        swap(a, b);
    }
    return a;
}
vector<int> solve(int n, int m, vector<int> a, vector<int> b)
{
    for (int i = 0; i < n; i++){

        int g = gcd(a[i],b[0]);
        for (int j = 1; j < m;j++){
            g = gcd(g, a[i] + b[j]);
        }
        cout << g << " ";
    }

    return {};
}   

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int &x : a)
        cin >> x;
    for(int &x : b)
        cin >> x;

    solve(n, m, a, b);
}


// 1 1 , 1 2 , 1 7 , 1 23 
