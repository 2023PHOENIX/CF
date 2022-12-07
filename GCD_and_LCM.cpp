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
int lcm(int a,int b){
    return a * b / gcd(a, b);
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc-- > 0){
        int a, b;
        cin >> a >> b;

        cout << gcd(a, b) << " " << lcm(a, b) << "\n";
    }
}