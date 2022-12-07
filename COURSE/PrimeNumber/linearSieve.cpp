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

void LinearSieve(int n){

    vector<bool> composite(n + 1, false);
    vector<int> primes;
    for (int i = 2; i <= n; i++){
        if(!composite(i))
            primes.push_back(i);

        for (int j = 0; j < primes.size() and i * prime[j] <= n;j++){
            composite[i * primes[j]] = true;     // this loop will always be running..
            if (i % primes[j] == 0)              // termination is only when it divides the number and this is going to be a minimum number. 
                break;
        }
    }
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


}