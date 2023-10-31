#include<stdio.h>

int main()
{
    int n,i,temp,sum,a=0,b=1;
    printf("Enter the number of terms in Fibonacci seris: ");
    scanf("%d",&n);
    printf("Fibonacci seris:-\n");
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d, %d",a,b);
    }
    else
    {
        printf("%d, %d, ",a,b);
        for(i=3;i<=n;i++)
        {
            sum=a+b;
            printf("%d, ",sum);
            a=b;
            b=sum;
        }
    }
    return 0;
}