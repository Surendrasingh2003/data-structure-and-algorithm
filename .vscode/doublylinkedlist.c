#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prevlink;
    struct Node* nextlink;
};

void show(struct Node* a)
{
    struct Node* p=a;
    while(p->nextlink!=NULL)
    {
        printf("%d\n",p->data);
        p=p->nextlink;
    }
    if(p->nextlink==NULL)
    {
        printf("%d\n",p->data);
    }
    printf("reverse printing\n");
    while(p->prevlink!=NULL)
    {
        printf("%d\n",p->data);
        p=p->prevlink;
    }
    if(p->prevlink==NULL)
    {
        printf("%d\n",p->data);
    }
    free(p);
}

int main()
{
    struct Node* head;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=8;
    head->prevlink=NULL;

    struct Node* second;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=3;
    second->prevlink=head;
    head->nextlink=second;

    struct Node* third;
    third=(struct Node *)malloc(sizeof(struct Node));
    third->data=6;
    third->prevlink=second;
    second->nextlink=third;

    struct Node* fourth;
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fourth->data=1;
    fourth->prevlink=third;
    third->nextlink=fourth;
    fourth->nextlink=NULL;

    show(head);

    return 0;
}
