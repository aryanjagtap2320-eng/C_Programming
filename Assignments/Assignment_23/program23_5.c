////////////////////////////////////////
// Function name : CountWhite
// Input         : char *
// Output        : int
// Description   : Counts number of white spaces.
// Date          : 03/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(isspace((unsigned char)*str))
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d", iRet);

    return 0;
}