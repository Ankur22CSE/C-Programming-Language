#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides of a triangle-:\n");
    scanf("%d %d %d",&a,&b,&c);
    if( (a+b)>c && (a+c)>b && (b+c)>a )
    {
        printf("It is a triangle");
    }
    else {
        printf("it is not a triangle");
    }
    return 0;
}