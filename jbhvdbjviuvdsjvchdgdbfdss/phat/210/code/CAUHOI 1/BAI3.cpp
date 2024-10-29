#include <bits/stdc++.h>
using namespace std;
int c[100001];
int main()
{
	freopen ("BAI3.INP","r",stdin);
	freopen ("BAI3.OUT","w",stdout);
	int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>c[i];
	}
	
	sort (c,c+n);
	{
		for (int i=0; i<n; i++)
		{
			if (c[i]%2==0)
			{
				cout<<c[i]<<" ";
			}
		}
	}
	
		sort (c,c+n);
	{
		for (int i=0; i<n; i++)
		{
			if (c[i]%2!=0)
			{
				cout<<c[i]<<" ";
			}
		}
	}
	
	return 0;
}
