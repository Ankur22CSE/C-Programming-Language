#include <stdio.h>

int power(int x, int y)
{
    if(y==0) //base case
    return 1;
    return x*power(x,(y-1));// code & call
}

int main() 
{
    int n,a;
    printf("Enter the base number and then it's power:");
    scanf("%d %d",&n,&a);
    printf("%d",power(n,a));
    return 0;
}