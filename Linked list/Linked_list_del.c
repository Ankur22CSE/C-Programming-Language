#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

void create();
void delete();
void display();

int main()
{
    int opr;
    while(1)
    {
        printf("\n1.Create");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\n\nChoose the operation:");
        scanf("%d",&opr);
        switch(opr)
        {
            case 1:
                create();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Good Bye");
                break;
        }
    }
    return 0;
}

void create()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data or vaue =");
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

void display(){
    struct node *ptr;
    printf("Linked list:-\n");
    for(ptr=start;ptr!=NULL;ptr=ptr->next)
    printf("%d, ",ptr->data);
}

void delete()
{

    if(start==NULL)
    {
        printf(">> Empty Linked list");
    }
    else
    {
        int d;
        struct node *temp,*ptr;
        printf("\nDelete element from:-");
        printf("\n1.Beginning");
        printf("\n2.End");
        printf("\n3.A given position\n>>");
        scanf("%d",&d);
        if(d==1)
        {
            temp=start;
            start=start->next;
            free(temp);
        }
        else if(d==2)
        {
            temp=start;
            while(temp->next!=NULL)
            {
                ptr=temp;
                temp=temp->next;
            }
            if(temp==start)
            start=NULL;
            else
            ptr->next=NULL;
            free(temp);
        }
        else if(d==3)
        {
            temp=start;
            int pos,i=1;
            printf("\n Enter the position:");
            scanf("%d",&pos);
            if(pos==1)
            {
                temp=start;
                start=start->next;
            }
            else
            {
                while(pos>i)
                {
                    ptr=temp;
                    temp=temp->next;
                    i++;
                }
                ptr->next=temp->next;
            }
            free(temp);
        }
    }
}