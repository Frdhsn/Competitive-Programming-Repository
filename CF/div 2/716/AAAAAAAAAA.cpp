#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
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
inline ll BigMod(ll a, ll e, ll mod)
{
	ll num = 1;
	while (e)
	{
		if (e % 2)
		{
			a %= mod;
			num %= mod;
			num = num * a;
			num %= mod;
		}
		e /= 2;
		a %= mod;
		a = a * a;
		a %= mod;
	}
	return num % mod;
}

void solve() {
	ll n, k; cin >> n >> k;
	cout << BigMod(n, k, MOD) << endl;
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