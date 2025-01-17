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
		string s, t, ans = "";
		cin >> s >> t;
		int a[30], i;
		memset(a, 0, sizeof(a));
		for (i = 0; i < t.size(); i++)
		{
			int x = t[i] - 'A';
			a[x]++;
		}

		for (i = s.size() - 1; i >= 0; i--)
		{
			int x = s[i] - 'A';
			if (a[x])
			{
				ans += s[i];
				a[x]--;
			}
		}
		reverse(ans.begin(), ans.end());
		if (ans == t)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
