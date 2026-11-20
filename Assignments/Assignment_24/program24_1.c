////////////////////////////////////////
// Function name : ChkChar
// Input         : char *, char
// Output        : BOOL
// Description   : Checks whether character is
//                 present in the string.
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}