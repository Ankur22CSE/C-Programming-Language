#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) // Increasinng order triangle
    {
        for(j=1;j<=i;j++)
        printf("*");
        
        printf("\n");
    }
    
    for(i=1;i<=n;i++) //Decreasing order triangle
    {
        for(j=1;j<=n+1-i;j++)
        printf("*");
         
        printf("\n");
    }

    return 0;
}