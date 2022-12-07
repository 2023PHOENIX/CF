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

vector<int> solve(int n)
{

    int c = 0,last = 0;
    vector<int> f(n, 0);
    while(true){
        // finding the factor count.
        fill(f.begin(), f.begin() + n, 0);
        int v = n;
        int arby = 1;
        for (int i = 2; i < n;i++){
            
            while(v % i == 0){
                v = v / i;
                f[i]++;
            }

            if(f[i] % 2 != 0){
                arby *= i;
            }
        }
      
        // get the arby value.
        int root = sqrt(n * arby);
        if(root == last || arby >= n)
            break;

        // cout << n << " "<<root<<endl;
        last = root;
        c++;
        n = root;
    }
 


    return {n,c};
}
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    auto x = solve(n);
    cout << x[0] << " " << x[1] << endl;
}

