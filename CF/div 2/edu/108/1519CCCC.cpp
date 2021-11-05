#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
// #define endl "\n"
// template<typename T>
// using ordered_set = tree<
// T,
// null_type,
// less<T>,
// rb_tree_tag,
// tree_order_statistics_node_update>;
using ll = long long int;
// starts here
const int MAX = 2e5 + 7, MOD = 1e9 + 7;
std::vector<ll>mul[MAX];
void solve() {
	int n; cin >> n;

	std::vector<ll> u(n), s(n), tot(n + 1);
	for (int i = 0; i <= n; i++)
		mul[i].clear();
	for (int i = 0; i < n; i++) {
		cin >> u[i];
	}
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll s; cin >> s;
		mul[u[i]].push_back(s);
	}
	for (int i = 1; i <= n; i++) {
		int sz = mul[i].size();
		if (sz == 0)continue;
		sort(mul[i].rbegin(), mul[i].rend());

		for (int j = 1; j < sz; j++ )
			mul[i][j] += mul[i][j - 1];
		for (int j = 1; j <= sz; j++ ) {
			int id = sz / j;
			id = id * j;
			tot[j] += mul[i][id - 1];
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << tot[i] << ' ';
	}
	cout << endl;
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