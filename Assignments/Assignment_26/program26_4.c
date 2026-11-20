////////////////////////////////////////
//Function name  : ChkSpecial
//Input          : Character
//Output         : Integer
//Description    : Checks whether given character is a special symbol.
//Date           : 20/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' ||
       ch == '$' || ch == '%' || ch == '^' ||
       ch == '&' || ch == '*')
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}