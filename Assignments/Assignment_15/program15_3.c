////////////////////////////////////////
//Function name  : CheckEqual
//Input          : Integer
//Output         : Boolean
//Description    : Takes input of two number and checks whether the numbers are equal or not .
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int Bool;
#define True 1
#define False 0

Bool CheckEqual(int iNO1,int iNO2)
{
    if (iNO1 == iNO2)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    Bool bRet = False;

    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if (bRet == True)
    {
        printf("Equal\n");
    }
    else
    {
                printf("Not Equal\n");

    }
    

    return EXIT_SUCCESS;
}