////////////////////////////////////////
// Function name : struprx
// Input         : char *
// Output        : void
// Description   : Returns the upper case characters.
// Date          : 03/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    struprx(arr);

    printf("Modified string is : %s", arr);

    return 0;
}