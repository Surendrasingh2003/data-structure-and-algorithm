#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* insertAtFirst(struct Node* a,int d)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=d;
    ptr->link=a;
    struct Node* p=a;
    while(p->link!=a)
    {
        p=p->link;
    }
    a=ptr;
    p->link=a;
    return a;
}

void insertAtEnd(struct Node* a,int d)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=d;
    struct Node*p=a;
    while(p->link!=a)
    {
        p=p->link;
    }
    ptr->link=a;
    p->link=ptr;
}

void insertAtIndex(struct Node* a,int d,int index)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=d;
    int i=0;
    struct Node* p=a;
    while(i<index-1)
    {
        p=p->link;
        i++;
    }
    ptr->link=p->link;
    p->link=ptr;
}

void show(struct Node* a)
{
    struct Node* p=a;
    /*while(p->link!=a)
    {
        printf("%d\n",p->data);
        p=p->link;
    }
    if(p->link==a)
    {
        printf("%d\n",p->data);
    }
    */
   do{
        printf("%d\n",p->data);
        p=p->link;   
   }
   while(p!=a);
}

int main()
{
    struct Node* head;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=5;
    

    struct Node* second;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=9;
    head->link=second;

    struct Node* third;
    third=(struct Node *)malloc(sizeof(struct Node));
    third->data=8;
    second->link=third;

    struct Node* fourth;
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fourth->data=6;
    third->link=fourth;
    fourth->link=head;


    show(head);
    printf("After insertion at first\n");
    head=insertAtFirst(head,10);
    show(head);

    printf("After insertion at end\n");
    insertAtEnd(head,9);
    show(head);

    
    printf("After insertion at index\n");
    insertAtIndex(head,4,2);
    show(head);
    return 0;
}
