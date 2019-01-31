#include<bits/stdc++.h>

using namespace std;


void abr(string s,int n){
	if (n<=10)
		{
			cout<<s<<endl;
			return;
		}

	string b=to_string(n-2);

	cout<<s[0]+b+s[n-1]<<endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;

		int n=s.length();
		abr(s,n);

	}
	return 0;
}