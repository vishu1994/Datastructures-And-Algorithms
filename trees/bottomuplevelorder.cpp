#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
#include<deque>
#include<queue>
#include<stack>
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



void bottomUpLevelOrder(struct node* root){
	queue<struct node*> q;
    stack<struct node*> s;

	q.push(root);
	q.push(NULL);

	while(q.size()>0){
		struct node* front=q.front();
		q.pop();

		if(front!=NULL){
			//cout<<front->data<<" ";
            s.push(front);
			if(front->right!=NULL)
				q.push(front->right);

			if(front->left!=NULL)
				q.push(front->left);

		}

		else if (front==NULL && q.size()>0)
		{
			/* code */
			//cout<<endl;
            s.push(NULL);
			q.push(NULL);


		}




	}

    while(s.size()>0){
        struct node* front=s.top();
        s.pop();

        if (front!=NULL)
        {
            /* code */
            cout<<front->data<<" ";
        }

        else{
            cout<<endl;
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

       
		bottomUpLevelOrder(root);       
        cout<<endl;
    }
    
    return 0;
}
