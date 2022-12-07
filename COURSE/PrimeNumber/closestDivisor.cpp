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



vector<int> closestDivisors(int n)
{
    int a = n + 1, b = n + 2;

    // finding two numbers find the factor

    int x = 1,y = 1;
    for (int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            x = i;
        }
    }
    for (int i = 2; i <= sqrt(b); i++){
        if(b % i == 0){
            y = i;
        }
    }

    int x_ = (a / x);
    int y_ = (b / y);

    if(abs(x - x_) < abs(y - y_)){
        return {x, x_};
    }else{
        return {y, y_};
    }
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    auto x = closestDivisors(n);
    cout << x[0] << " " << x[1] << "\n";
}