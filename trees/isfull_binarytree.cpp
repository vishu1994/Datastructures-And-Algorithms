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

bool isFull(struct node* root){

    if(root==NULL){
        return true;
    }


    //leaf node
    if (root->left==NULL && root->right==NULL)
    {
        /* code */
        return true;
    }

    //node with 2 child...
    if (root->left && root->right)
    {
        /* code */
        return(isFull(root->left) && isFull(root->right));
    }


    return false;

    



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


        if(isFull(root)){
            cout<<"True"<<endl;
        }

        else
            cout<<"False"<<endl;

    }
    
    return 0;
}
