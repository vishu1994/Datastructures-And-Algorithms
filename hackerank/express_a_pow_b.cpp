//#include <bits/stdc++.h>
#include<iostream>
#include<unordered_set>
#include<math.h>
using namespace std;

void precomputations(unordered_set<long long int> &s,long long int n){

	for (long long int i = 2; i*i <= n; ++i)
	{
		int j=2;
		long long int ans=pow(i,j);

		while(ans<=n){

			s.insert(ans);
			j++;
			ans=pow(i,j);

		}
	}


}

bool is_a_pow_b(unordered_set<long long int> &s,long long int n){

	if(s.find(n)!=s.end()){
		return true;
	}

	return false;



}


int main(int argc, char const *argv[])
{
	//int ar[]={2,16,31,8880,961};
	unordered_set<long long int> s;
	precomputations(s,pow(10,8));

	// for(auto i:s){
	// 	cout<<i<<" ";
	// }

	// cout<<endl;


	cout<<is_a_pow_b(s,2)<<endl;
	cout<<is_a_pow_b(s,16)<<endl;
	cout<<is_a_pow_b(s,31)<<endl;
	cout<<is_a_pow_b(s,961)<<endl;

	return 0;
}
