#include<stdio.h>

int main()
{
    int i,j,n,m;
    printf("Enter the number of rows (Odd number):");
    scanf("%d",&n);
    m=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==m || j==m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}