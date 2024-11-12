#include<stdio.h>
#include<Stdlib.h>
typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;
Node* createN(int data){ 
    Node* newN=(Node*)malloc(sizeof(Node));
    newN->data=data;
    newN->left=newN->right=NULL;
    return newN;
}
Node* insertN(Node* root,int data){
    if(root==NULL)
        root=createN(data);
    else if(data<=root->data)
        root->left=insertN(root->left,data);
    else
        root->right=insertN(root->right,data);
    return root;
}
//inorder
void print(Node* root){
    if(root!=NULL){
        print(root->left);
        print(root->right);
        printf("\t%d",root->data);
    }
}
int main(){
    Node* root=NULL;
    root=insertN(root,5);
    root=insertN(root,3);
    root=insertN(root,7);
    root=insertN(root,2);
    root=insertN(root,4);
    root=insertN(root,6);
    root=insertN(root,8);
    printf("Binary Tree:");
    print(root);
    printf("\n");
    return 0;
}