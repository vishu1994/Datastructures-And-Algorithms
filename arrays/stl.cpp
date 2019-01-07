#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>


using namespace std;

bool f(int a,int b){

	return a>b;
}


void vectordemo(){

	std::vector<int> v={11,1,2,10,19,3};
	
	for(int x:v){

		cout<<x<<" ";
	}

	cout<<endl;

	sort(v.begin(), v.end());

	for(int x:v){

		cout<<x<<" ";
	}

	cout<<endl;

	bool present=binary_search(v.begin(),v.end(),2);

	bool absent=binary_search(v.begin(),v.end(),100);
	
	cout<<present<<endl;
	cout<<absent<<endl;

	v.push_back(100);
	v.push_back(100);
	v.push_back(100);
	v.push_back(100);
	v.push_back(123);


	//std::vector<int>::iterator it1=lower_bound(v.begin(),v.end(),100);

	auto it1=lower_bound(v.begin(),v.end(),100);

	std::vector<int>::iterator it2=upper_bound(v.begin(),v.end(),100);

	cout<<*it1<<" "<<*it2<<endl;


	// sort(v.begin(), v.end(),f);

	// for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	// {
	// 	cout<<*i<<" ";
	// }


	auto it=find(v.begin(),v.end(),1);
	cout<<"1 is present at "<<distance(v.begin(),it);

	cout<<endl;
}

void newv(){

	vector<int> vec{1,2,3,4,5,6,7,8,9} ;
	vector<int> :: iterator index;
	index=lower_bound(vec.begin(),vec.end(),10);
	if(index==vec.end()){

		cout<<"not present"<<endl;
		return;
	}
	cout<<index-vec.begin()<<endl;
}

void setdemo(){

	set<int> s;
	s.insert(10);
	s.insert(1);
	s.insert(2);

	for(int x:s){

		cout<<x<<" ";
	}

	cout<<endl;

	auto it1=s.find(1);
	if(it1==s.end())
		cout<<"oops element not present"<<endl;

	else{
		cout<<*it1<<" is present"<<endl;

	}

	auto it2=s.lower_bound(3);
	cout<<"lower bound of 3 is "<<*it2;



}

void mapdemo(){

	map<char,int> m;
	string s="vishalpandey";

	for(char c:s){

		m[c]++;
	}


	//iterating over hashmap

	for(auto p:m){

		cout<<p.first<<" "<<p.second<<endl;
	}




}

int main(){

	mapdemo();
	//setdemo();
	//vectordemo();
	//newv();
	return 0;
}