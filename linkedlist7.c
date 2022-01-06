#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

void deleteAtIndex(struct Node* a,int index)
{
    struct Node* p=a;
    int i=0;
    while(i<index-1)
    {
        p=p->link;
        i++;
    }
    struct Node* q=p->link;
    p->link=q->link;
    free(q);
}

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

    
    struct Node* fourth;
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fourth->data=4;
    fourth->link=NULL;
    third->link=fourth;

    linkedlistTraversal(head);
    deleteAtIndex(head,2);
    printf("after deletion \n");
    linkedlistTraversal(head);
}