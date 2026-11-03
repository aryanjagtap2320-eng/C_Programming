////////////////////////////////////////
//Function name  : NonFact
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns all the Non-factors of that number.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNO)
{
    int iCnt = 0;

    for (int iCnt = 1; iCnt <= iNO ; iCnt++)
    {
        if ((iNO % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    NonFact(iValue);



    return EXIT_SUCCESS;
}