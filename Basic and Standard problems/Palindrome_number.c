#include<stdio.h>

int main()
{
    int n,n1,rev=0,d,i;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    for(i=0;n>0;i++)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(n1==rev)
    printf("It is a palindrome number");
    else
    printf("It is not a palindrome number.");
    return 0;
}