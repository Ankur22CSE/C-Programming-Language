// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,k,j,nst,nsp,mline;  //nst=no.of star, nsp=no.of spaces, mline=middle line
    printf("Enter the no.of row:");
    scanf("%d",&n);
    nst=1;
    nsp=(n+1)/2;
    mline=nsp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<nsp;j++)
        printf("  ");
        
        for(k=1;k<=nst;k++)
        printf("* ");

        if(i<mline) //First spaces decreases and star increases
        {
            nsp--;
            nst=nst+2;
        }
        else // And then  spaces increases and star decreases
        {
            nsp++;
            nst=nst-2;
        }
        printf("\n");
    }

    return 0;
}