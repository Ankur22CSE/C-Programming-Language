#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)     //Use if-else for conditions
    printf("%d is the greatest number.",a);
    if(b>a && b>c)
    printf("%d is greatest number.",b);
    else
    printf("%d is the greatest number.",c);

    return 0;
}