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
		long long n, k, x;
		cin >> n >> x >> k;

		if (2 * k >= x * (x + 1) && 2 * k <= n * (n + 1) - (n - x) * (n - x + 1))
		{
			cout << "Yes";
		}

		else
		{
			cout << "No";
		}

		cout << endl;
	}

	return 0;
}
