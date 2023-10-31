#include <stdio.h>

int main() 
{
    float a,b,c,d,e,f,m1,m2,m3;

    printf("Enter the co-ordinate of x1 & y1 :");
    scanf("%f %f",&a,&b);
    printf("Enter the co-ordinate of x2 & y2 :");
    scanf("%f %f",&c,&d);
    printf("Enter the co-ordinate of x3 & y3 :");
    scanf("%f %f",&e,&f);
    
    //Calculating slope of lines joining these 3 points
    m1=(d-b)/(c-a);
    m2=(f-d)/(e-c);
    m3=(f-b)/(e-a);

    if(m1==m2 && m2==m3)//Comparing slopes of the lines connecting points
    {
        printf("Collinear points");
    }
    else
    {
        printf("Non-collinear points");
    }
    return 0;
}