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

void makePrime(vector<char> &IsPrime){

    IsPrime[0] = IsPrime[1] = false;

    for (int i = 2; i*i < IsPrime.size(); i++){
        if(IsPrime[i] == true)
        for (int j = i * i; j < IsPrime.size();j+=i){
            IsPrime[j] = false;
        }
    }


}

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<char> IsPrime(n + 1, true);
    // 10^5 => O(N log N)
    makePrime(IsPrime);

    for (int i = 0; i<m ;i++){
        string q;
        getline(cin, q);
        
        
    }
}