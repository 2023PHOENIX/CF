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

void solve(int n,int k){
    vector<char> isPrime(1001, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i<= 1001; i++){
        if(isPrime[i])
        for (int j = i * i; j <= 1001; j+=i)
            isPrime[j] = false;
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++){
        if(isPrime[i])
            primes.emplace_back(i);
    }

    int c = 0;
    for (int i = 1; i < primes.size();i++){
        int v = primes[i] + primes[i - 1] + 1;
        if(v <= n && isPrime[v]){
            c++;
        }
    }

    c >= k ? cout << "YES" : cout << "NO";
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    solve(n,k);
}