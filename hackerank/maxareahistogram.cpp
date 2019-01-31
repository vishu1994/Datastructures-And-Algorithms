// 2
// 7
// 6 2 5 4 5 1 6 
// 4
// 5 10 12 4 

// Sample Output 0

// 12
// 20

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;


void populatep1(int ar[],int p1[],int n){

	stack<int> s;
	for (int i = 0; i < n; ++i)
	{
		while(s.size()>0 && ar[i]<ar[s.top()]){
			p1[s.top()]=i;
			s.pop();
		}

		s.push(i);
	}


	while(s.size()>0){
		p1[s.top()]=n;
		s.pop();
	}


	// for (int i = 0; i < 7; ++i)
	// {
	// 	 code 
	// 	cout<<p1[i]<<" ";
	// }

	// cout<<endl<<endl;

}

void populatep2(int ar[],int p2[],int n){

	stack<int> s;
	for (int i = n-1; i>=0; i--)
	{
		while(s.size()>0 && ar[i]<ar[s.top()]){
			p2[s.top()]=i;
			s.pop();
		}

		s.push(i);
	}


	while(s.size()>0){
		p2[s.top()]=-1;
		s.pop();
	}


	// for (int i = 0; i < 7; ++i)
	// {
	// 	 code 
	// 	cout<<p2[i]<<" ";
	// }

	// cout<<endl<<endl;


}

int maxo(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}

void maxarea(int ar[],int p1[],int p2[],int n){

	int ans=*max_element(ar,ar+n);
	for (int i = 0; i < n; ++i)
	{
		ans=maxo(ans,(p1[i]-p2[i]-1)*ar[i]);
	}

	cout<<ans<<endl;
}


int main(int argc, char const *argv[])
{
	int ar[]={5,10,12,4};
	int p1[4];
	int p2[4];
	populatep1(ar,p1,4);
	populatep2(ar,p2,4);
	maxarea(ar,p1,p2,4);

	// for (int i = 0; i < 10; ++i)
	// {
	// 	/* code */
	// 	cout<<p2[i]<<" ";
	// }
	cout<<endl<<endl;
	return 0;
}
