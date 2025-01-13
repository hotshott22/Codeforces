// hotshot_22

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;

		ll a[n];

		ll ans = INT_MIN;

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (ll i = 0; i < n; i++)
		{
			ans = max(ans, a[(i - 1 + n) % n] - a[i]);
		}

		for (ll i = 0; i < n; i++)
		{
			ans = max(ans, a[i] - a[0]);
		}

		for (ll i = 0; i < n - 1; i++)
		{
			ans = max(ans, a[n - 1] - a[i]);
		}

		cout << ans << endl;
	}

	return 0;
}
