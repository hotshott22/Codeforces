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

		ll cnt = 1;
		for (ll p = 2; n % p == 0 && p <= n; p++)
		{
			cnt++;
		}

		cout << cnt << endl;
	}

	return 0;
}
