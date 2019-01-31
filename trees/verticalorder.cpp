
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include<limits.h>
// #include<deque>
// #include<map>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data,depth;
    struct node *left,*right;
};


struct node* createnode(int data){
    struct node* newnode=new node;
    newnode->data=data;
    newnode->depth=0;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct node* insert(struct node *root,int k){
    
    //struct node* newnode=createnode(k);
    
    if(root==NULL){
        return createnode(k);
    }
    
    else if(root->data > k){
        root->left=insert(root->left,k);
    }
    
    else{
        root->right=insert(root->right,k);
    }
    
    return root;
    
    
}



void filldepth(struct node* root,int d){
	if(root==NULL)
		return;

	root->depth=d;
	filldepth(root->left,(root->depth)-1);
	filldepth(root->right,(root->depth)+1);
}

void printdepth(struct node *root){
	if (root==NULL)
	{
		/* code */
		return;
	}


	cout<<root->data<<" "<<root->depth<<endl;
	printdepth(root->left);
	printdepth(root->right);
}


void verticalorder(struct node* root, map<int,vector<int>> & map){
	
	if (root==NULL)
	{
		/* code */
		return;
	}

	int d=root->depth;
	int val=root->data;
	//auto it=map.find(d);
	map[d].push_back(val);
	auto it=map.find(d);
	sort(it->second.begin(),it->second.end());
	verticalorder(root->left,map);
	verticalorder(root->right,map);



}


void printverticalorder(struct node* root, map<int,vector<int>> & map){


	// for(auto i:map){
	// 	for(auto j:i.second){
	// 		cout<<j<<" ";
	// 	}

	// 	cout<<endl;
	// }

	for(auto i:map){
		//printing depth.....
		//cout<<i.first<<" ";
		for(auto j :i.second){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        struct node* root=NULL;
        
        
        for(int i=0;i<n;i++){
            root=insert(root,a[i]);
        }

    
		filldepth(root,0);      
        //cout<<endl;

        //printdepth(root);
        //cout<<endl;
		map<int,vector<int>> map;
        verticalorder(root,map);
    	printverticalorder(root,map);

    }
    
    return 0;
}