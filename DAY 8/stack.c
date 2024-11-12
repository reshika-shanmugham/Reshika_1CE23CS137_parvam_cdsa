#include<Stdio.h>
#include<stdlib.h>
#define MAX 5
struct Stack{
    int items[MAX];
    int top;
};
void initStack(struct  Stack *s){//user defined
    s->top=-1;
}
int isFull(struct Stack *s){//user defined
    return s->top==MAX-1;
}
int isEmpty(struct Stack *s){//user defined
    return s->top==-1;
}
void push(struct Stack *s,int value){
    if(isFull(s))
        printf("\nStack Overflow!!");
    else{
        s->top++;
        s->items[s->top]=value;
        printf("\nPushed %d into the stack!!",value);
    }

}
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow!!");
        return -1;
    }
    else{
        int poppedvalue=s->items[s->top];
        s->top--;
        printf("\nPopped %d from the stack!!",poppedvalue);
        return poppedvalue;
    }
}
void display(struct Stack *s){
    if(isEmpty(s))
        printf("\nNothing to display");
    else{
        printf("\nStack ELements:");
        for(int i=0;i<=s->top;i++)
            printf("\n%d\n",s->items[i]);
    }
    printf("\n");
}
int main(){
    struct Stack st;
    initStack(&st);
    push(&st,35);
    push(&st,45);
    push(&st,55);
    push(&st,65);
    push(&st,75);
    push(&st,85);
    push(&st,95);
    display(&st);
    pop(&st);
    pop(&st);
    pop(&st);
    pop(&st);
    pop(&st);
    display(&st);
    return 0;
}
