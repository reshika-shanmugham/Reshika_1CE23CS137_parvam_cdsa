#include<Stdio.h>
#include<Stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Q{
    struct Node *front,*rear;
};
struct Q* createQ(){
    struct Q* q=(struct Q*)malloc(sizeof(struct Q));
    q->front=q->rear=NULL;
    return q;
};
void enq(struct Q* q,int val){
    struct Node* newN=(struct Node*)malloc(sizeof(struct Node));
    if(!newN){
        printf("Memory allocation error\n");
        return ;
    }
    newN->data=val;
    newN->next=NULL;
    if(q->rear==NULL){
        q->front=q->rear=newN;
    }
    else{
        q->rear->next=newN;
        q->rear=newN;
    }
    printf("Enqued %d into the queue\n",val);
}
int deq(struct Q* q){
    if(q->front==NULL){
        printf("Queue is empty");
        return -1;
    }
    struct Node* temp=q->front;
    int deqval=temp->data;
    q->front=q->front->next;
    if(q->front==NULL){
        q->rear=NULL;
    }
    free(temp);
    printf("Dequeued %d from the queue",deqval);
    return deqval;
}
void display(struct Q* q){
    struct Node* temp=q->front;
    if(q->front ==NULL){
        printf("Queue is emptly\n");
    }
    else{
        printf("\nQueue elements:");
        while(temp!=NULL){
            printf("\t%d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    struct Q* q=createQ();
    enq(q,10);
    enq(q,20);
    enq(q,30);
    display(q);
    deq(q);
    display(q);
    return 0;
}