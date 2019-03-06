#include <bits/stdc++.h>
using namespace std;
char test(int s)
{
	if(s>=90)
		return 'A';
	else if(s>=75)
		return 'B';
	else if(s>=60)
		return 'C';
	else
		return 'D';
}
int main()
{
#define n 4
	int s[4],ans=0,a=0;
	char c[4];
	for(int i=0; i<n; i++)
		cin>>s[i];
	for(int i=0; i<n; i++)
		c[i]=test(s[i]);
	for(int i=0; i<n; i++)
	{
		if(c[i]=='A')
			ans+=1,a++;
		else if(c[i]=='D')
		{
			cout<<"Poor LanYangYang"<<endl;
			return 0;
		}
	}
	if(a==4)
		ans+=1;
	cout<<ans<<endl;
	return 0;
}

