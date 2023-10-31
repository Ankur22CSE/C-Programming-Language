#include <stdio.h>

int fibo(int x)
{
    if(x==1) // Base case
    return 0;
    else if(x==2)//Base case
    return 1;
    return (fibo(x-1)+fibo(x-2)); //call
}

int main() {
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)// For series and for n-th term just print fibo(n)
    printf("%d ",fibo(i));
    return 0;
}