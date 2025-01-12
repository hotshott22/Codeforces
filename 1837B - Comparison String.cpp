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
		string s;

		cin >> n;
		cin >> s;

		int ans = 2;
		int count = 2;

		for (int i = 1; i < n; i++)
		{
			if (s[i] != s[i - 1])
			{
				count = 2;
			}
			else
			{
				count++;
			}
			ans = max(count, ans);
		}

		cout << ans << endl;
	}

	return 0;
}
