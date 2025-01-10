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
		int a, b, n;
		cin >> a >> b >> n;

		int arr[n];

		long long sum = b;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			sum += min(arr[i], a - 1);
		}

		cout << sum << endl;
	}

	return 0;
}
