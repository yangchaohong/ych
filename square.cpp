#include <bits/stdc++.h>
using namespace std;
//#define int long long
main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	x4=x3;
	y4=y2-abs(y1-y2);
	cout<<x4<<' '<<y4<<endl;
	return 0;
}

