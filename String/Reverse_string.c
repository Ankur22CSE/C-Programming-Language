#include <stdio.h>
#include<string.h>

int main() {
    char c[100],rev[100];
    int size=0,i;
    printf("Enter the string:");
    gets(c);
    while(c[size]!='\0') //To know the size of the string
    {
        size++;
    }
    
    for(i=0;i<size;i++) //Reverse process
    {
        rev[i]=c[size-i-1];
    }
    puts("Reverse of that string:-");
    puts(rev);//Output
    
    return 0;
}