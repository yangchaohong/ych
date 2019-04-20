#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
	int a,b,ans;
	cin>>a>>b;
	if(a>b)
		swap(a,b);
	ans=a+b-1-(b-a);
	cout<<ans<<endl;
	return 0;
}

