#include<stdio.h>

int fact(float x)
{
    int r=1,i;
    for(i=1;i<=x;i++)
    r=r*i;
    return r;
}

int main()
{
    int n,i,ncr,j,k;
    printf("Number of rows:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(k=1;k<n-i;k++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            ncr=fact(i)/(fact(i-j)*fact(j));
            printf(" %d ",ncr);
        }
        printf("\n");
    }
    return 0;
}