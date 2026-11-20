////////////////////////////////////////
// Function name : LastChar
// Input         : char *, char
// Output        : int
// Description   : Returns index of last
//                 occurrence of character.
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iRet = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iRet = iCount;
        }

        iCount++;
        str++;
    }

    return iRet;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}