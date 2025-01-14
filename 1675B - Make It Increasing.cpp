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

		for (ll i = 0; i < n; i++)
			cin >> a[i];

		ll c = 0;

		for (ll i = n - 2; i >= 0; i--)
		{
			while (a[i] >= a[i + 1] && a[i] > 0)
			{
				a[i] = a[i] / 2;
				c++;
			}

			if (a[i] == a[i + 1])
			{
				c = -1;
				break;
			}
		}

		cout << c << endl;
	}

	return 0;
}
