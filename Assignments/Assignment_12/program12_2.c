///////////////////////////////////////
//Function name  : CheckZero
//Input          : Integer
//Output         : Bool
//Description    : Takes input of a number and checks whether there is a zero in it or not.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int Bool;

Bool CheckZero(int iNO)
{
    int iCnt = 0;
    int iDigit = 0;

    while (iNO != 0)
    {
        iDigit = iNO % 10;

        if (iNO == 0)
        {
            return True;
        }
        
        iNO = iNO / 10;
    }
    return False;
}

int main()
{

    int iValue = 0;
    Bool bRet = False;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if (bRet == True)
    {
        printf("The number is zero\n");
    }
    else
    {
        printf("The number is not zero\n");
    }


    return EXIT_SUCCESS;
}