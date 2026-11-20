
////////////////////////////////////////
//
// Function Name : CountSmall
// Input         : String
// Output        : Integer
// Description   : It counts small characters
// Date          : 20/11/2026
// Author        : Aryan Pradeep Jagtap
//
////////////////////////////////////////
#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter
    while(*str != '\0')
    {
        // Logic
        if(*str >= 'a' && *str <= 'z')
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
    scanf("%[^\n]",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}