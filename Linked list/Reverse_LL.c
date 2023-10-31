#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;

void create();
void display();
void reverse();

int main()
{
    int opr;
    while(1)
    {
        printf("\n\n1.Create");
        printf("\n2.Display");
        printf("\n3.Reverse");
        printf("\n4.Exit");
        printf("\nChoose the operation you want to perform:");
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
                reverse();
                break;
            case 4:
                exit(0);
                break;
            default:
                break;
        }
    }
    return 0;
}
void create()
{
    struct node *temp ,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    start=temp;
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void display()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        // temp=temp->next;
        printf("%d, ",temp->data);
        temp=temp->next;
    }
}
void reverse()
{
    struct node *temp, *pretemp, *ptr;
    pretemp=NULL;
    temp=ptr=start;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        temp->next=pretemp;
        pretemp=temp;
        temp=ptr;
    }
    start=pretemp;
}