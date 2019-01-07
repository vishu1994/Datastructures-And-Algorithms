#include<iostream>
#include<set>
#include<map>

using namespace std;


void maxwindowsum(int ar[],int n,int k){

	int sum=0;
	map<int,int> map;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		if (i==k-1)
		{
			/* code */
			auto it1=map.find(ar[i]);
			if(it1==map.end()){
				map[ar[i]]=1;
			}

			else{

				map[ar[i]]++;
			}

			sum=sum+(map.rbegin()->first);
		}

		else if (i<k)
		{
			/* code */
			auto it1=map.find(ar[i]);
			if(it1==map.end()){
				map[ar[i]]=1;
			}

			else{

				map[ar[i]]++;
			}

		}

		else{

			auto it1=map.find(ar[i]);
			if(it1==map.end()){
				map[ar[i]]=1;
			}

			else{

				map[ar[i]]++;
			}


			map.erase(ar[i-k]);
			sum=sum+(map.rbegin()->first);

		}
	}


    cout<<sum<<endl;
}

int main(int argc, char const *argv[])
{
	int ar[]={4,10,54,11,8,2,9};
	maxwindowsum(ar,7,3);

	return 0;
}						