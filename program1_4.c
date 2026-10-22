//////////////////////////////////////
//Function name  : Check
//Input          : Integer
//Output         : True or False
//Description    : Checks whether the given number is divisible by 5
//Date           : 22/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}