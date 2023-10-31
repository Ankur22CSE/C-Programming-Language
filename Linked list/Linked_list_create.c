#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *START=NULL;

void display();
void create();
void sum();
void insert();
// void delete();

int main()
{
    int opr;
    while(1)
    {
        printf("\n\n\nChoose the required operation:-");
        printf("\n1.Display");
        printf("\n2.Create.");
        printf("\n3.Insert");
        printf("\n4.Sum");
        printf("\n5.Delete");
        printf("\n6.Exit");
        printf("\n\nEnter the required operation=");
        scanf("%d",&opr);
        switch (opr)
        {
        case 1:
            display();
            break;
        case 2:
            create();
            break;
        case 3:
            insert();
            break;
        case 4:
            sum();
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}
void create(){
    struct node *temp, *ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value=");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(START==NULL)
    {
        START=temp;
    }
    else{

        ptr=START;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display()
{
    struct node *ptr;
    printf("Linked list:-");
    for(ptr=START;ptr!=NULL;ptr=ptr->next)
    {
        printf("%d, ",ptr->data);
    }
}

int count()
{
    struct node *ptr;
    int count=0;
    for(ptr=START;ptr!=NULL;ptr=ptr->next)
    {
        count++;
    }
    return count;
}

void sum()
{
    struct node *ptr;
    int sum=0,t=0;
    for(ptr=START;ptr!=NULL;ptr=ptr->next)
    {
        if(t%2==0)
        {
            printf("%d, ",ptr->data);
        }
        t++;
        sum=ptr->data+sum;
    }
    printf("\n%d is the total sum.",sum);
}

void insert()
{
    struct node *new_node,*ptr;
    int choice;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value or data : ");
    scanf("%d",&new_node->data);

    printf("\n\nInsert node at:-");
    printf("\n1.At begining.");
    printf("\n2.At middle");
    printf("\n3.At end\n>>");
    scanf("%d",&choice);

    int ct=count(); // Ct = No.of elements in the linked list
    if(choice==1)
    {
        new_node->next=START;
        START=new_node;
    }
    else if(choice==2) // At a particular position
    {
        int pos ,i=1;
        printf("Enter the position=");
        scanf("%d",&pos);
        if(pos>ct)
        {
            printf("Invalid Position");
        }
        else
        {
            ptr=START;
            while(pos-1>i) // -1 because ptr->next will reach at pos and will point next position for interchange
            {
                i++;
                ptr=ptr->next;
            }
            new_node->next=ptr->next;
            ptr->next=new_node;
        }
    }
    else if(choice==3)
    {
        new_node->next=NULL;
        ptr=START;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }
}
