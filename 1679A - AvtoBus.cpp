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

		if (n % 2 == 1 || n < 4)
			cout << "-1" << endl;
		else
		{
			ll mn, mx;

			mn = n / 6;
			if (n % 6 != 0)
				mn++;
			mx = n / 4;

			cout << mn << " " << mx << endl;
		}
	}

	return 0;
}
