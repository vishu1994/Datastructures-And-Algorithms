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

int countNodes(struct node* root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }

    else
        return 1+countNodes(root->left)+countNodes(root->right);
}

bool isBst(struct node* root){
    if(root==NULL)
        return true;

    if (root->data > root->left->data && root->data < root->right->data)
    {
        /* code */
        return true;
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

       

    }
    
    return 0;
}
