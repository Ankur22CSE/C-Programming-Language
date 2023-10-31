#include <stdio.h>

int main() 
{
    int n,k,i,j;
    puts("Enter the number of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++) //For earlier spaces
        printf("  ");
        for(k=1;k<=n;k++) // For Stars
        printf("* ");

        printf("\n");
    }
    return 0;
}