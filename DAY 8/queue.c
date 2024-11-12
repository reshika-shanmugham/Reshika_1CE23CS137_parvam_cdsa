#include<Stdio.h>
typedef struct{
    int data[5];
    int front;
    int rear;
} Q;
void initQ(Q *q){
    q->front=-1;
    q->rear=-1;
}
int Empty(Q *q){
    return q->front==-1;
}
int Full(Q *q){
    return q->rear==4;
}
void enq(Q *q,int val){
    if(Full(q)){
        printf("Queue Overflow!!");
        return;
    }
    if(Empty(q)){
        q->front=0;
    }
    q->data[++q->rear]=val;
}
int deq(Q *q){
    if(Empty(q)){
        printf("Queue Underflow!!");
        return -1;
    }
    int value=q->data[q->front];
    if(q->front==q->rear){
        q->front=-1;
        q->rear=-1;
    }
    else
        q->front++;
    return value;
}
int peek(Q *q){
    if(Empty(q)){
        printf("Queue is Emplty!!");
        return -1;
    }
    return q->data[q->front];
}
void print(Q *q){
    if(Empty(q)){
        printf("Queue is Empty!!");
        return;
    }
    printf("Queue:");
    for(int i=q->front;i<=q->rear;i++){
        printf("%d",q->data[i]);
    }
    printf("\n");
}
int main(){
    Q que;
    initQ(&que);
    enq(&que,14);
    enq(&que,03);
    enq(&que,05);
    print(&que);
    printf("Dequed:%d\n",deq(&que));
    print(&que);
    print("Front:%d\n",peek(&que));
    enq(&que,18);
    enq(&que,06);
    enq(&que,05);
    print(&que);
    return 0;
}