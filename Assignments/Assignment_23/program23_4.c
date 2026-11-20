////////////////////////////////////////
// Function name : DisplayDigit
// Input         : char *
// Output        : void
// Description   : Displays only digits from string.
// Date          : 03/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(isdigit((unsigned char)*str))
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}