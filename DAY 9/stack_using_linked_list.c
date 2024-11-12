#include<stdio.h>
#include<Stdlib.h>
struct Node{
    int data;
    struct Node* next
};
void push(struct Node** top,int val){
    struct Node* newN=(struct Node*)malloc(sizeof(struct Node));
    if(!newN){
        printf("Memory Allocation Error!!");
        return ;
    }
    newN->data=val;
    newN->next=*top;
    *top=newN;
    printf("Pushed %d onto stack\n",val);
}
int pop(struct Node** top){
    if(*top==NULL){
        printf("Stack is empty! cannot pop\n");
        return -1;
    }
    struct Node* temp=*top;
    int popped=temp->data;
    *top=(*top)->next;
    free(temp);
    printf("Popped %d from stack\n",popped);
    return popped;
}
void display(struct Node* top){
    struct Node* temp=top;
    if(top==NULL){
        printf("Stack is empty");
    }
    else{
        printf("Stack Elements:");
        while(temp!=NULL){
            printf("\t%d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    struct Node* stack =NULL;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    display(stack);
    pop(&stack);
    display(stack);
    return 0;
}