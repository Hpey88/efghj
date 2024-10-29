#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen ("BAI2.INP","r",stdin);
	freopen ("BAI2.OUT","w",stdout);
	string s;
	getline (cin,s);
	int demso=0;
	int demchu=0;
	int demzzz=0;
	for (char c : s)
	{
	    if (isdigit(c))
	    {
	    	demso++;
		}
		else
		{
			if (isalpha(c))
			{
				demchu++;
			}
			else
			{
				demzzz++;
			}
		}
	}
	cout<<demchu<<" "<<demso<<" "<<demzzz;
	return 0;
}
