#include<stdio.h>

void swap1(int * x, int * y) // Pointers are used to switch the address of the variable 
{
    int *temp;
    temp=x;
    x=y;
    y=temp;
    printf("Value of a=%d and b=%d\n",*x,*y);
    return ;   
}
void swap2(int* x, int* y) //*x and *y means value of tha address that they hold
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("Value of a=%d and b=%d",*x,*y);
    return ;
}

int main(){
    int a,b;
    int *x, *y;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    swap1(&a,&b);
    swap2(&a,&b);
    return 0;
}