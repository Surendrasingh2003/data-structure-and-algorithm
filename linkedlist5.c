/*
*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

void linkedlistTraversal(struct Node* ptr)
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

void insertAfterNode(struct Node* prevNode,int d)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=d;
    ptr->link=prevNode->link;
    prevNode->link=ptr;
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

    linkedlistTraversal(head);
    insertAfterNode(second,6);
    printf("after insertion\n");
    linkedlistTraversal(head);
}