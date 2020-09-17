#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t;
	cin >> t;
	while(t--) {
		ll n, q;
		cin >> n >> q;
		ll c=0, sum=0;
		for(int i=0; i<q; ++i) {
			ll f, d;
			cin >> f >> d;
			sum+=abs(c-f);
			sum+=abs(f-d);
			c=d;
		}
		cout << sum << "\n";
	}
}
