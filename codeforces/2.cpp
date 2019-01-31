#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m,a;

    cin>>n;
    cin>>m;
    cin>>a;

    //float ans;
    long long int x=(n+a-1)/a;
    long long int y=(m+a-1)/a;
    
    printf("%lld\n",x*y);

	return 0;
}	