#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

signed main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
		cin >> n >> m >> k;
        
		int div = n / k, rem = n % k, sum = 0;
		for(int i = 0; i < m; i++) {
            int x;
			cin >> x;
			sum += max(0ll, x - div);
		}
		if(sum <= rem)
			cout << ("Yes\n");
		else
			cout << ("No\n");
    }
}
