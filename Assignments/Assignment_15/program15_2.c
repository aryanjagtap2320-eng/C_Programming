////////////////////////////////////////
//Function name  : CheckGreater
//Input          : Integer
//Output         : Boolean
//Description    : Takes input of a number and checks whether the number is greater or less than 100 .
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int Bool;
#define True 1
#define False 0

Bool CheckGreater(int iNO)
{
    if (iNO > 100 )
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
    int iValue = 0;
    Bool bRet = False;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if (bRet == True )
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }


    return EXIT_SUCCESS;
}