#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define endl "\n"
// template<typename T>
// using ordered_set = tree<
// T,
// null_type,
// less<T>,
// rb_tree_tag,
// tree_order_statistics_node_update>;
using ll = long long int;
// starts here
const int MAX = 1e6, MOD = 1e9 + 7;

void solve() {
	int n; cin >> n;
	int res = 1e9;
	for (int m = 1; m <= 100; m++) {
		for (int w = 0; w <= 100; w++) {
			int tot = m + w;
			int ret  = (m * 100) / tot;
			if ( (m * 100) % tot)continue;
			if (ret == n)
				res = min(res, m + w);
		}
	}
	cout << res << endl;
}
int main () {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t = 1; cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		//cout << "Case #" << tc << ": ";
		//cout << "Case " << tc << ": ";
		solve();
	}
	return 0;
}