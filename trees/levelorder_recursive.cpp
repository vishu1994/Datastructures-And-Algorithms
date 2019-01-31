#include<iostream>

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

int height(struct node* root){
	if (root==NULL)
	{
		/* code */
		return -1;
	}

	else
		return(1+max(height(root->left),height(root->right)));
}


void printGivenLevel(struct node* root, int level){
	static int c=0;

	if(root==NULL)
		return ;

	if (level==0)
	{
		/* code */
		cout<<root->data<<" ";
		// if (c==0)
		// {
		// 	/* code */
		// 	cout<<endl;
		// 	c++;
		// }
		
	}

	else{
		printGivenLevel(root->left,level-1);
		printGivenLevel(root->right,level-1);
		
		
	}

	//cout<<endl;


}

void levelOrderRecursive(struct node* root){
	int h=height(root);
	//cout<<h<<endl;

	for (int i = 0; i <=h; ++i)
	{
		/* code */
		printGivenLevel(root,i);
	}
}

int main(int argc, char const *argv[])
{
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

        levelOrderRecursive(root);
        cout<<endl;

    }

    
	return 0;
}