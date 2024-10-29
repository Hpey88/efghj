#include <bits/stdc++.h>
using namespace std;
bool cp(int n)
{
	int sqr=sqrt(n);
	if (sqr*sqr==n)
	{
		return true;
	}
	return false;
}

long long c[100001];
int main()
{
	freopen ("BAI4.INP","r",stdin);
	freopen ("BAI4.OUT","w",stdout);
	int n;
	cin>>n;
	bool ellen=false;
	for (int i=0;i <n; i++)     
	{
		cin>>c[i];
	}
	
	long long tong=0;
	for (int i=0; i<n; i++)
	{
		if (cp(c[i])==true)
		{
			tong=tong+c[i];
			ellen=true;
		}
	}
    
		if (!ellen)
		{
			cout<<"-1";
		}
		else
		{
			cout<<tong;
		}
	
	
	
	return 0;
}




