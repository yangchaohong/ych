#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[101],k[101]={0};
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=2;i<=n;i++)
		for(int j=i;j>0;j--)
			if(a[i]>a[j])
				k[i]++;
	for(int i=1;i<=n;i++)
		cout<<k[i]<<' ';
}

