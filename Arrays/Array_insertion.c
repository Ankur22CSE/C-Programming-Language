#include<stdio.h>

int main()
{
    int n,size,pos,value,i,a[50];
    size=sizeof(a)/4;
    printf("Enter the no.of elements in the array:");
    scanf("%d",&n);

    printf("Enter the elements in the array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter rthe element you want to insert:");
    scanf("%d",&value);
    printf("Enter it's position:");
    scanf("%d",&pos);
    if(size>pos && pos>0)
    {
        for(i=n+1;i>=pos;i--) //Shifting the array for insertion
        {
            a[i]=a[i-1];
        }
        a[pos-1]=value; // Entering new element in the array
        n=n+1;
        printf("New array:-");
        for(i=0;i<n;i++)
        {
            printf("%d, ",a[i]);
        }
    }
    else
    {
        printf("Overflow.");
    }
    return 0;
}