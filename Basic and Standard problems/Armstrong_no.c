#include<stdio.h>
#include<math.h>

int digits(int x) // No.of digits in number
{
    int c=0;
    while(x>0)
    {
        c++;
        x=x/10;
    }
    return c;
}

int main()
{
    int n,i,sum,d,p;
    for(i=0;i<=999;i++)//Number between a & b
    {
        p=digits(i);
        n=i;
        sum=0;
 
        while(n>0)
        {
            d=n%10;
            sum=sum+pow(d,p);
            n=n/10;
        }
        if(sum==i)
        printf("%d\n",i);
    }
    return 0;
}
