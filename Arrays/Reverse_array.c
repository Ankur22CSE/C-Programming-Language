#include<stdio.h>

void Reverse(int m[],int* z) // n is no.of elements and z pointer is used in storing it
{
    int i,j,x,temp;
    x=*z-1; // *z means value of n
    for(i=0,j=x ; i<j ; i++,j--) // Initialization ; Condtion : Updation
    {
        temp=m[i];
        m[i]=m[j];
        m[j]=temp;
    }
    return ;
}

int main(){
    int n,a[100],i;
    printf("Enter the n.of elements:");
    scanf("%d",&n);
    puts("Enter the elements of the array:-");
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);

    Reverse(a,&n);
    puts("Reverse array:-");
    for(i=0;i<n;i++)
    printf("%d, ",a[i]);

    return 0;
}