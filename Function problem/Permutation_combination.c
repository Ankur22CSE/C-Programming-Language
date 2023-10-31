#include<stdio.h>

float fact(float m) // Function for factorial
{
    float r=1,i;
    for(i=1;i<=m;i++)
    {
        r=r*i;
    }
    return r;

}

int main()
{
    float n,c,r,ncr,npr; 
    printf("Enter the value of n: ");
    scanf("%f",&n);
    printf("Enter the value of r:");
    scanf("%f",&r);

    ncr=fact(n)/(fact(n-r)*fact(r));
    npr=fact(n)/fact(r);
    printf("Result of comination=%f  and permutaion=%f .",ncr,npr);
    return 0;
}