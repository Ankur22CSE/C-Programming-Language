#include<stdio.h>
#include<string.h>

int main() 
{
    int i,j,r,k;
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if((i+j)>r)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    puts("By Another method:-");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        printf("  ");
        for(k=1;k<=i;k++)
        printf("# ");
        
        printf("\n");
    }
    return 0;
}