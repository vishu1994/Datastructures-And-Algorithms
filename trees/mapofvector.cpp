#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{	

	map<int,vector<int>> m;

	for (int i = 0; i < 5; ++i)
	{
		/* code */

		m[i].push_back(1);
		m[i].push_back(2);
		m[i].push_back(3);
	}


	for(auto i:m){
		cout<<i.first<<"  {";
		
		for( auto vec_iter = i.second.rbegin() ; vec_iter != i.second.rend() ; ++vec_iter )
                std::cout << *vec_iter << "  " ;

		cout<<"}"<<endl;
	}
	return 0;
}