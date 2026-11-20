////////////////////////////////////////
// Function name : strtogglex
// Input         : char *
// Output        : void
// Description   : Toggles the case of characters.
// Date          : 03/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(islower((unsigned char)*str))
        {
            *str = toupper((unsigned char)*str);
        }
        else if(isupper((unsigned char)*str))
        {
            *str = tolower((unsigned char)*str);
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is : %s", arr);

    return 0;
}