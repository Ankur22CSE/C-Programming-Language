#include <stdio.h>
#include<string.h>

int main() 
{
    char c[100];
    puts("Enter the string:");// It works like printf function with a "\n" at the end
    gets(c); //It is like scanf funncton much better to use in case of string
    puts(c);
    
    printf("\n");
    
    printf("Enter the string:");
    scanf("%[^\n]s",c); //Format for taking input of a string
    printf("%s",c);

    return 0;
}