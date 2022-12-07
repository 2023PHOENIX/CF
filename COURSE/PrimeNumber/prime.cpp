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

void countPrimes(int n){

    vector<bool> prime(n + 1, false);
    prime[2] = true;
    for (int i = 3; i <= n; i+=2)
        prime[i] = true;

    int lm = sqrt(n);
    for (int i = 3; i <= sqrt(n);i+=2){
        if (prime[i])
            for (int j = i * i; j <= n; j+=i){
                prime[j] = false;
            }
    }

    int count = 0;

    for (auto x : prime)
    {
        if(x)
            count++;
    }

    cout << count << endl;
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    countPrimes(n);
}