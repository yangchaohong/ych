#include <bits/stdc++.h>
using namespace std;
//#define int long long
main()
{
	int p;
	string s;
	getline(cin,s);
	while(s.find('(',p)!=string::npos)
	{
		p=s.find('(',p);
		s.erase(s.begin()+p);
		for(int i=p;s[i]!=')';i++)
			if(s[i]>='a'&&s[i]<='z')
			{
				s[i]=toupper(s[i]);
				int q=s.find(' ');
				s.erase(s.begin()+p+1,s.begin()+q);
			}
	}
	cout<<s<<endl;
	return 0;
}

