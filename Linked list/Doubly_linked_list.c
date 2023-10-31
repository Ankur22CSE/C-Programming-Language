#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node * start=NULL;

void create()
{
    struct node *temp, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("Enter the data or value:");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start=temp=newnode;
    }
    else{
        while(temp->next!=NULL)
        {
            // temp->next=newnode;
            // newnode->next=temp;
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=temp;
    }
}

void display()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        temp=temp->next;
        printf("%d",temp->data);
    }
}
int main()
{
    int opr;
    while(1)
    {
        printf("\n1.Create\n2.Display\nchoice>>");
        scanf("%d",&opr);
        switch(opr)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
                break;
            default:
                break;
        }
    }
    return 0;
}
