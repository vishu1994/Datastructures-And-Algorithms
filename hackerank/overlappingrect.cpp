#include<iostream>

using namespace std;


long long int area(int l,int b){
	return l*b;
}

bool overlap(int x1lb,int y1lb,int x1rt,int y1rt,int x2lb,int y2lb,int x2rt,int y2rt){

	if(x1rt<x2lb||x2rt<x1lb)
		return false;

	if(y1lb>y2rt||y2lb>y1rt)
		return false;

	return true;

}

void areaOfRectangles(int x1lb,int y1lb,int x1rt,int y1rt,int x2lb,int y2lb,int x2rt,int y2rt){


	int x1=abs(x1rt-x1lb);
	int y1=abs(y1rt-y1lb);

	int x2=abs(x2rt-x2lb);
	int y2=abs(y2rt-y2lb);

	long long int a1=area(x1,y1);
	long long int a2=area(x2,y2);

	if(overlap(x1lb,y1lb,x1rt,y1rt,x2lb,y2lb,x2rt,y2rt)==false){
		
		cout<<a1+a2<<endl;		
	}

	else{

		int x=(min(x1rt,x2rt)-max(x1lb,x2lb));
		int y=(min(y1rt,y2rt)-max(y1lb,y2lb));

		long long int a3=area(x,y);

		cout<<(a1+a2)-a3<<endl;

	}

}

int main(int argc, char const *argv[])
{
	int x1lb=-4;
	int y1lb=-3;
	int x1rt=-2;
	int y1rt=5;

	int x2lb=-3;
	int y2lb=-5;
	int x2rt=1;
	int y2rt=3;


	areaOfRectangles(x1lb,y1lb,x1rt,y1rt,x2lb,y2lb,x2rt,y2rt);


	return 0;
}