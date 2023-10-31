#include <stdio.h>

int main() {
    
    int cp,sp;
    printf("Enter the Cost price Rs:");
    scanf("%d",&cp);
    printf("Enter the Selling price Rs:");
    scanf("%d",&sp);
    if(cp<sp)
    {
        printf("There is a profit of %d rupees",sp-cp);
    }
    else
    {
        printf("There is a loss of %d rupees.",cp-sp);
    }
    
    return 0;
}