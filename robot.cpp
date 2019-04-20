#include <bits/stdc++.h>
using namespace std;
//#define int long long
main()
{
	int x,y,x1,y1,ans;
	cin>>x>>y>>x1>>y1;
	if(x==x1)
		ans=abs(y-y1)+1;
	else if(y==y1)
		ans=abs(x-x1)+1;
	else if(abs(x-x1)==abs(y-y1))
		ans=abs(x-x1)+1;
	else
	{
		cout<<"I don't kown!!!"<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}

