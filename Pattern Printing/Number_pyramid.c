#include <stdio.h>

int main() 
{
   int n,i,j,k,l;
   printf("Enter the no.of rows:");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n-i;j++)
    printf("  "); //Double space
    for(k=1;k<2*i;k++)
    printf("%d ",k); //Number with a space

    printf("\n");
   }

   printf("New pattern:-\n");
   for(i=1;i<=n;i++)
    {
         for(j=1;j<=n-i;j++)
         printf("  ");
         for(k=1;k<=i;k++)
         printf("%d ",k);
         for(l=(i-1);l>0;l--)
         printf("%d ",l);
         
         printf("\n");
    }
   return 0;
}
