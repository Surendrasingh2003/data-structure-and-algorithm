#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

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


    return 0;
}
