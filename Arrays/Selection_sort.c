#include<stdio.h>
#include<limits.h>

int main()
{
    int A[20],n,i,j,min;
    printf("Enter the no.of elements in array:");
    scanf("%d",&n);

    printf("Enter the elements:-\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);

    for(i=0;i<n-1;i++) //For no.of passes
    {
        min=A[i];
        for (j=i+1;j<n;j++) //Finding min in usorted array
        {
            if(min>A[j]) //Compare-and-Swapping
            {
                min=A[j];
                A[j]=A[i];
                A[i]=min;
            }
        }
    }
    printf("Sorted array:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}