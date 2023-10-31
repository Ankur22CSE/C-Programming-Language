// Question: If there are n no.of steps then the no.of ways in which a person can reach top if that person can take maximum 2 steps at once?

#include <stdio.h>

int stair(int x)
{
    if(x==1 || x==2) //Person can take maximum 2 steps in one move
    return x;
    int t=stair(x-1)+stair(x-2);//when maximum 2 stairs are left
    return t;
}

int main() {
    int n,a;
    printf("Enter the number of stair:");
    scanf("%d",&n);
    printf("No.of ways:%d",stair(n));
    return 0;
}