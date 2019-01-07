#include <bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	set<int> s;
	int ar[]={100,1,2,400,23,2,1,45,32,2};

	for (int i = 0; i < 10; ++i)
	{
		/* code */
		s.insert(ar[i]);
	}


	auto it=s.find(23);
	s.erase(it);


	for(auto it1:s){

		cout<<it1<<" ";
	}

	cout<<endl;




	return 0;
}