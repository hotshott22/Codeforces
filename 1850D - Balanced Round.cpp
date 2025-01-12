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
		int n, k;
		cin >> n >> k;
		int arr[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);

		int count = 1;

		int ans = 1;

		for (int i = 1; i < n; i++)
		{
			if (arr[i] - arr[i - 1] > k)
			{
				count = 1;
			}
			else
			{
				count++;
			}
			ans = max(count, ans);
		}

		cout << n - ans << endl;
	}

	return 0;
}
