#include<Stdio.h>
#include<stdio.h>
#include<Stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createN(int data){
    struct Node* Node=(struct Node*)malloc(sizeof(struct Node));
    Node->data=data;
    Node->left=Node->right=NULL;
    return Node;
};
struct Node* insertN(struct Node* root,int data){
    if(root==NULL)
        return createN(data);
    else if(data<root->data)
        root->left=insertN(root->left,data);
    else
        root->right=insertN(root->right,data);
    return root;
};
//preorder
void preorder(struct Node* root){
    if(root!=NULL){
        printf("\t%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("\t%d",root->data);
        inorder(root->right);
    }
}
void postorder(struct Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("\t%d",root->data);
    }

}
int main(){
    struct Node* root=NULL;
    int val[]={5,3,7,2,4,6,8};
    int n=sizeof(val)/sizeof(val[0]);
    for(int i=0;i<n;i++){
        root=insertN(root,val[i]);
    }
    printf("In-order transversal: ");
    inorder(root);
    printf("\n");
    printf("Post-order traversal: ");
    postorder(root);
    printf("\n");
    printf("Pre-order traversal: ");
    preorder(root);
    printf("\n");
    return 0;
}