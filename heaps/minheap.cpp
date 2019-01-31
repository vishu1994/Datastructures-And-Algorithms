#include<bits/stdc++.h>
using namespace std;

class minheap
{
public:
	std::vector<int> v;
	

	int getMin(){
		return v[0];
	}

	void insert(int x){
		
		if (v.size()==0)
		{
			/* code */
			v.push_back(x);
		}

		else{
			
			v.push_back(x);
			int c=v.size()-1;

			while(c>0 && v[c]<v[(c-1)/2]){
				iter_swap(v.begin()+c,v.begin()+(c-1)/2);
				c=(c-1)/2;
			}
		}

	}

	void print(){
		for(auto i:v){
			cout<<i<<" ";
		}

		cout<<endl;
	}

	void delMin(){

		v[0]=v[v.size()-1];
		v.pop_back();

		int t=0;
		int s;

		while((2*t+1)<v.size()){

			int c=2*t+1,s=v[c];

			if ((2*t+2)<v.size() && v[2*t+2]<s)
			{
				/* code */
				s=v[2*t+2];
				c=2*t+2;
			}

			if (s<v[t])
			{
				/* code */
				iter_swap(v.begin()+t,v.begin()+c);
				t=c;
			}

			else
				break;
		}


	}
	
	
};

int main(int argc, char const *argv[])
{
	minheap h;
	
	int n;
	cin>>n;

	int ar[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>ar[i];
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		h.insert(ar[i]);
	}

	h.print();
	cout<<endl;

	cout<<"Min element is "<<h.getMin()<<endl;

	h.delMin();

	h.print();

	return 0;
}