// Write a Program to find the length of the String by passing a string as an argument using UDF. Do not use any string function.

#include <stdio.h>

void size(char string[])
{
    int length = 0, i;
    
    for(i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("Length of string is %d",length);
}

int main() 
{
    
    char string[50];
    int i;
    
    printf("Enter any string: ");
    scanf("%s",&string);
    
    size(string);
    
    return 0;
}
