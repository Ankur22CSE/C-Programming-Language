#include <stdio.h>

int main() {
    int i,j,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if((i+j)==(r+1) || i==j) //Both condition is used to print stars on diagonal
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}