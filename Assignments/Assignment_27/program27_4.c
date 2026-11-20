////////////////////////////////////////
//Function name  : ChkVowel
//Input          : String
//Output         : BOOL
//Description    : Checks whether string contains vowels.
//Date           : 20/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    // Filter
    while(*str != '\0')
    {
        // Logic
        if(*str == 'a' || *str == 'e' ||
           *str == 'i' || *str == 'o' ||
           *str == 'u' || *str == 'A' ||
           *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
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
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Vowels are present");
    }
    else
    {
        printf("Vowels are not present");
    }

    return 0;
}