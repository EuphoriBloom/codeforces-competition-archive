#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

const int INF = 1e18;
const int MOD = 1e9 + 7;

int mod_pow(int a, int b, int m = MOD) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,ans = 0;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c > 1) ans++;
    }
    cout << ans; 
    return 0;
}