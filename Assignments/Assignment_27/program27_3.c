////////////////////////////////////////
//
// Function Name : Difference
// Input         : String
// Output        : Integer
// Description   : It returns difference between
//                 small and capital characters
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
//
////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iSmall = 0;
    int iCapital = 0;

    // Filter
    while(*str != '\0')
    {
        // Logic
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    iCnt = iSmall - iCapital;

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^\n]",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}