#include<stdio.h>

int main(){
    int a[50],i,size,value,pos,n;
    size=sizeof(a)/3;
    printf("Enter the no.of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elments in the array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements's position you want to delete =");
    scanf("%d",&pos);

    if(pos>0 && pos<=size)
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        printf("New array:-");
        for(i=0;i<n;i++)
        {
            printf("%d, ",a[i]);
        }
    }
    else
    printf("Invalid position.");
}