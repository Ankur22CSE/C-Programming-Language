#include <stdio.h>
#include<limits.h>

int main() 
{
    int a[100],i,j,smax,max,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    smax=INT_MIN;
    max=INT_MIN;
    puts("Array:-");
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            smax=max;
            max=a[i];
        }
        else if(smax<a[i])
        smax=a[i];
    }
    printf("\nSecond max element:%d",smax);

    return 0;
}