#include<bits/stdc++.h>
using namespace std;


void count(int ar[],int n,int k){

	if (ar[k-1]!=0)
	{
		/* code */
		int c=k-1;
		while(c<n-1 && ar[c+1]==ar[k-1]){
			c++;
		}

		cout<<c+1<<endl;
		return;
	}


	int cr=k-1;
	int i=1;
	while(i>=0 && ar[cr-i]==0){
		
		i++;
	}																				

	cout<<k-i<<endl;
}


int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n;
	cin>>k;

	int ar[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>ar[i];
	}

	count(ar,n,k);

	return 0;
}