#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
#include<deque>
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


void inorder(struct node* root){
    
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" "<<root->depth<<endl;
    preorder(root->left);
    preorder(root->right);
    
    
}

void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int size(struct node* root){
		
	if (root==NULL)
	{
		return 0;
	}


	return (1+size(root->left)+size(root->right));


}


int sum(struct node* root){
	if(root==NULL){
		return 0;
	}

	return root->data+sum(root->left)+sum(root->right);
}

int findmax(struct node* root){
	
	if(root==NULL){
		return INT_MIN;
	}

	int max=root->data;
	int ld=findmax(root->left);
	int rd=findmax(root->right);

	if (ld>max)
	{
		max=ld;
	}

	if (rd>max)
	{
		/* code */
		max=rd;
	}

	return max;


}

int findmaxBst(struct node* root){

	if(root==NULL){
		return INT_MIN;
	}

	while(root->right!=NULL){
		root=root->right;
	}

	return root->data;
}

int findminBst(struct node* root){

	if(root==NULL){
		return INT_MIN;
	}

	while(root->left!=NULL){
		root=root->left;
	}

	return root->data;
}


int findHeight(struct node* root){

	if (root==NULL)
	{
		/* code */
		return -1;
	}

	return (1+max(findHeight(root->left),findHeight(root->right)));
}


void filldepth(struct node* root,int d){
	if(root==NULL)
		return;

	root->depth=d+1;
	filldepth(root->left,(root->depth));
	filldepth(root->right,(root->depth));
}


void levelorder(struct node* root){
	deque<struct node*> q;
	q.push_back(root);
	q.push_back(NULL);

	while(q.size()>0){
		struct node* front=q.front();
		q.pop_front();

		if(front!=NULL){
			cout<<front->data<<" ";

			if(front->left!=NULL)
				q.push_back(front->left);

			if(front->right!=NULL)
				q.push_back(front->right);

		}

		else if (front==NULL && q.size()>0)
		{
			/* code */
			cout<<endl;
			q.push_back(NULL);


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

        filldepth(root,-1);
        
        preorder(root);
        // cout<<endl;
        // inorder(root);
        // cout<<endl;
        // postorder(root);
        // cout<<endl;
        // cout<<endl;

        // cout<<size(root)<<endl;
        // cout<<sum(root)<<endl;
		

		//preorder(root);
		// cout<<"Max element is "<<findmaxBst(root)<<endl;
		// cout<<"Min element is "<<findminBst(root)<<endl;
		//cout<<"Height of tree is : "<<findHeight(root); 
		//levelorder(root);       
        cout<<endl;
    }
    
    return 0;
}
