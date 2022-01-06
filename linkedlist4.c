
/*
    case 3:insert at the end
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

void insertAtEnd(struct Node* a,int d)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=d;
    ptr->link=NULL;
    struct Node* p=a;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=ptr;

}

void show(struct Node* ptr)
{
    if(ptr==NULL)
    {
        printf("linkedlist is empty");
    }
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}

int main()
{
    struct Node* head=NULL;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=8;
    head->link=NULL;

    struct Node* second;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=9;
    second->link=NULL;
    head->link=second;

    struct Node* third;
    third=(struct Node *)malloc(sizeof(struct Node));
    third->data=7;
    third->link=NULL;
    second->link=third;

    show(head);
    insertAtEnd(head,3);
    printf("after insertion\n");
    show(head);
}