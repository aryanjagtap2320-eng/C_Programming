////////////////////////////////////////
// Function name : StrRevX
// Input         : char *
// Output        : void
// Description   : Reverses the string in place.
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
////////////////////////////////////////

#include <stdio.h>
#include <string.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str);
    char temp;

    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}