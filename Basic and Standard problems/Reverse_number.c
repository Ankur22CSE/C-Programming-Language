#include <stdio.h>

int main() 
{
    int n,digit=0,i,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=0;n!=0;i++)//Loop will stop when n will be zero
    {
        digit=n%10;//Taking out digits
        n=n/10;//Removing digits in the number from right side
        rev=digit+rev*10;//reverse of a number
    }
    
    printf("No.of digits=%d Reverse=%d",i,rev);
    
    return 0;
}