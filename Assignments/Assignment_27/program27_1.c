
////////////////////////////////////////
//
// Function Name : CountCapital
// Input         : String
// Output        : Integer
// Description   : It counts capital characters
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
//
////////////////////////////////////////
#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Filter
    while(*str != '\0')
    {
        // Logic
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}