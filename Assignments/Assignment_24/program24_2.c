////////////////////////////////////////
// Function name : CountChar
// Input         : char *, char
// Output        : int
// Description   : Returns frequency of given
//                 character in the string.
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}