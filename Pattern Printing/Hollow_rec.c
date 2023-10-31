#include <stdio.h>

int main() 
{
    int i,j,r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    
    for(i=1;i<=r;i++) // For rows
    {
        for(j=1;j<=c;j++) // For columns
        {
            if(j==1 || i==1 || j==c || i==r)
            printf("* ",j); // Leaving space after star for proper pattern
            else
            printf("  ");//Here Using double spaces for proper pattern 
        }
        printf("\n");
    }

    return 0;
}