#include <stdio.h>

int main() 
{
    for(int i=65;i<=90;i++) // ASCII valur of 'A' is 65 and 'Z' is 90.
    {
        printf("%c-%d\n",i,i);  //Use %c for character and %d for number it's ASCII value
    }
    return 0;
}