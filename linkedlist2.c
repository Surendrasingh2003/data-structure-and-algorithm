/*
insertion in linked list
case 1: insert at the beginning
case 2: insert in the between
case 3: insert at the end
case 4: insert after a node
--------------------------------------------------------------------
case 1: insert at the beginning:
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* link;
};

void show(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}

struct Node* insertAtFirst(struct Node* a,int d)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=d;
    ptr->link=a;
    return ptr;
}

int main()
{
    struct Node* head=NULL;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=45;
    head->link=NULL;

    struct Node* second=NULL;
    second=(struct Node*)malloc(sizeof(struct Node));
    second->data=28;
    second->link=NULL;
    head->link=second;

    struct Node* third=NULL;
    third=(struct Node*)malloc(sizeof(struct Node));
    third->data=47;
    third->link=NULL;
    second->link=third;

    show(head);

    printf("After insertion of node with data 56 at the beginning\n");
    head=insertAtFirst(head,56);
    show(head);

    return 0;
}
