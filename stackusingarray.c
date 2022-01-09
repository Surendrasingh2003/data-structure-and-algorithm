#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    int* arr;
};

int isEmpty(struct stack s)
{
    int r=0;
    if(s.top==-1)
    {
        r=1;
    }
    return r;
}

int  isFull(struct stack s)
{
    int r=0;
    if(s.top==s.size-1)
    {
        r=1;
    }
    return r;
}

struct stack push(struct stack s,int data)
{
    if(isFull(s)){
        printf("stack is full\n");
    }
    else
    {
        s.top=s.top+1;
        s.arr[s.top]=data;
        printf("Added element is %d\n",s.arr[s.top]);
    }
    return s;
}

int peek(struct stack s)
{
    return s.arr[s.top];
}
struct stack pop(struct stack s)
{
    if(isEmpty(s)){
            printf("the stack is empty.\n");
    }
    else{
       
        printf("the poped out element : %d\n",s.arr[s.top]);
        s.top--;
        return s;
    }
}

int main()
{
    struct stack s;
    s.size=10;
    s.top=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));
    s=push(s,5);
    s=pop(s);
    s=push(s,95);
    s=push(s,25);
    s=push(s,35);
    s=push(s,15);
    s=push(s,25);
    s=push(s,75);
    s=push(s,85);
    s=push(s,65);
    s=push(s,56);
    s=pop(s);
    printf("peek is %d \n",peek(s));
    s=pop(s);
    s=pop(s);
    s=pop(s);
    printf("Element present in  stack.\n");
    for(int i=0;i<=s.top;i++)
    {
        printf("%d\n",s.arr[i]);
    }
    return 0;
}
