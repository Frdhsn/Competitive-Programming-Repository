#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MAX=1e5+10;
void solve(){
	int n,m;cin>>n>>m;
	ll e=n*m;
	if(e&1)cout<<"Alice\n";
	else cout<<"Bob\n";
}
int  main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t=1;cin>>t;
	for(int tc=1;tc<=t;tc++)
		solve();
    return 0;
}