// hotshot_22

#include <bits/stdc++.h>
#include <math.h>

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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int diff = n - k;

		int cx[26] = {0};

		for (int i = 0; i < s.size(); i++)
		{
			++cx[s[i] - 'a'];
		}
		int count = 0;

		for (int i = 0; i < 26; i++)
		{
			count += cx[i] % 2;
		}

		puts(count <= k + 1 ? "YES" : "NO");
	}

	return 0;
}
