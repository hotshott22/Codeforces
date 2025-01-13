//hotshot_22

# include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;

	while(t--){

		int n;cin>>n;
		int bal= 2*n;

		int arr[1000000];

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];

			if(arr[i]==1)
				arr[i]++;
		}

		for(int i=1; i<n ;i++)
		{
			if(arr[i] % arr[i-1]==0)
			{
				arr[i]++;
				bal--;
			}
		}

		for(int i=0 ;i<n ;i++)
			cout<< arr[i]<<" ";
		cout<<endl;

	}



	return 0;
}
 
