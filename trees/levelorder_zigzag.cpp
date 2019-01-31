#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
#include<deque>
#include<map>
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



void levelorderzigzag(struct node* root){
	deque<struct node*> q;
    map<int,vector<int>> map;
    int count=0;
	q.push_back(root);
	q.push_back(NULL);

	while(q.size()>0){
		struct node* front=q.front();
		q.pop_front();

		if(front!=NULL){
			//cout<<front->data<<" ";
            map[count].push_back(front->data);

			if(front->left!=NULL)
				q.push_back(front->left);

			if(front->right!=NULL)
				q.push_back(front->right);

		}

		else if (front==NULL && q.size()>0)
		{
			/* code */
            count++;
			cout<<endl;
			q.push_back(NULL);


		}




	}

    for(auto i:map){
        if(i.first%2==0){

            for( auto vec_iter = i.second.rbegin() ; vec_iter != i.second.rend() ; ++vec_iter )
                std::cout << *vec_iter << " " ;

            

        }

        else{
            for(auto v:i.second){
                cout<<v<<" ";
            }
        }
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
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

    
		levelorderzigzag(root);       
        cout<<endl;
    }
    
    return 0;
}
