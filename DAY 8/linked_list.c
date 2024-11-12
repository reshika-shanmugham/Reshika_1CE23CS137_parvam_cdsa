#include<Stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node* createN(int value){
    Node* newN=(Node*)malloc(sizeof(Node));
    newN->data=value;
    newN->next=NULL;
    return newN;
}
void append(Node** head,int val){
    Node* newN=createN(val);
    if(*head==NULL){
        *head=newN;
        return;
    }
    Node* temp=*head;
    while(temp->next != NULL)
        temp=temp->next;
    temp->next=newN;
}
void deleteN(Node** head, int val){
    Node* temp=*head;
    Node* prev=NULL;
    if(temp!=NULL && temp->data==val){
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Value %d not found in this list\n");
        return;
    }
    prev->next=temp->next;
    free(temp);
}
void display(Node* head){
    Node* temp=head;
    printf("Linked Lisht: ");
    while(temp!=NULL){
        printf("%d-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    Node* head=NULL;
    append(&head,25);
    append(&head,85);
    append(&head,95);
    display(head);
    deleteN(&head,85);
    display(head);
    deleteN(&head,105);
    return 0;
}