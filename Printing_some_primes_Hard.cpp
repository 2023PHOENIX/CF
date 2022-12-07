#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define INF 1e18
#define mod (int)(1e9 + 7)
typedef long long int ll;
typedef pair<int,int> pii;

#define PB push_back
#define MP make_pair

void blockSeive(){
    const int S = 10000;
    const int n = (int)1e9;
    vector<int> primes;
    int nsqrt = sqrt(n);
    vector<char> is_prime(nsqrt + 2, true);
    for (int i = 2; i <= nsqrt; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }

    int result = 0;
    vector<char> block(S);
    for (int k = 0; k * S <= n; k++)
    {
        fill(block.begin(), block.end(), true);
        int start = k * S;
        for (int p : primes)
        {
            int start_idx = (start + p - 1) / p;
            int j = max(start_idx, p) * p - start;
            for (; j < S; j += p)
                block[j] = false;
        }
        if (k == 0)
            block[0] = block[1] = false;
        for (int i = 0; i < S && start + i <= n; i++)
        {
            if (block[i] and i % 500 == 1)
                cout << k * S + i << "\n";
        }
    }
}

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    blockSeive();
}