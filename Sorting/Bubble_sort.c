#include<stdio.h>

int main()
{
    int A[20],temp,i,j,n;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter the elements in your array:-\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<=n-1;i++) // No.of passes
    {
        for(j=0;j<n-i;j++) //No.of Comparision 
        {
            if(A[j]>A[j+1]) //Swaping 
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Array after sorting:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}