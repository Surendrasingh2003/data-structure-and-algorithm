#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

void DeleteNode(struct Node* a,int v)
{
    struct  Node* p=a;
    struct  Node* q=a->link;
    while(q->data!=v&&q->link!=NULL)
    {
        q=q->link;
        p=p->link;
    }
    if(q->data==v)
    {
        p->link=q->link;
        free(q);
    }

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

    linkedlistTraversal(head);
    DeleteNode(head,9);
    printf("after deletion\n");
    linkedlistTraversal(head);

}